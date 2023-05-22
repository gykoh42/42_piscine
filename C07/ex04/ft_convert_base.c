/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:07:13 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/25 18:07:42 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (ft_strlen(base) <= 1)
		return (0);
	if (base[0] == '+' || base[0] == '-')
		return (0);
	while (i < base_len - 1)
	{
		j = i + 1;
		while (j < base_len)
		{
			if ((base[i] == base[j]) || (base[j] == '-' || base[j] == '+'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	space_check(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		i++;
	}
	return (1);
}

int	is_in_base(char *base, char to_find)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (to_find == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	answer;

	i = 0;
	sign = 1;
	answer = 0;
	if ((base_check(base) == 1) && (space_check(base) == 1))
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (is_in_base(base, str[i]) != -1)
		{
			answer = answer * ft_strlen(base) + is_in_base(base, str[i]);
			i++;
		}
	}
	return (sign * answer);
}
