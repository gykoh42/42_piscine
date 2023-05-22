/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:02:48 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/18 10:18:27 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	write_base_num(long long int nbr, char *base)
{
	int	zinsu;

	zinsu = ft_strlen(base);
	if (nbr >= zinsu)
	{
		write_base_num(nbr / zinsu, base);
		write_base_num(nbr % zinsu, base);
	}
	else
		write (1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				zinsu;
	long long int	number;

	number = (long long int)nbr;
	zinsu = ft_strlen(base);
	if (!base_check(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		write_base_num(-number, base);
	}
	else
		write_base_num(number, base);
}
