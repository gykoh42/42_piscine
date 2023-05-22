/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:04:09 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/25 18:37:23 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	base_check(char *base);
int	space_check(char *base);
int	is_in_base(char *base, char to_find);
int	ft_atoi_base(char *str, char *base);

int	get_size(int nbr, int len)
{
	int	i;

	i = 0;
	if (nbr < 0)
		nbr = -nbr;
	else if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= len;
		i++;
	}
	return (i);
}

void	combine_ans(int number, char *answer, char *base, int size)
{
	unsigned int	base_len;
	unsigned int	tmp_num;

	base_len = ft_strlen(base);
	if (number == 0 && is_in_base(base, '0') != -1)
	{
		answer[0] = is_in_base(base, '0') + '0';
		answer[1] = '\0';
	}
	if (number < 0)
	{
		answer[0] = '-';
		tmp_num = number * (-1);
	}
	else
		tmp_num = number;
	if (tmp_num >= base_len)
		combine_ans(tmp_num / base_len, answer, base, size - 1);
	answer[size] = base[tmp_num % base_len];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long int	from_num;
	int				base_to_len;
	int				size;
	char			*answer;

	if (base_check(base_from) == 0 || space_check(base_from) == 0
		|| base_check(base_to) == 0 || space_check(base_to) == 0)
		return (0);
	from_num = ft_atoi_base(nbr, base_from);
	base_to_len = ft_strlen(base_to);
	size = get_size(from_num, base_to_len);
	if (from_num < 0)
		size++;
	answer = (char *)malloc(sizeof(char) * size);
	if (!answer)
		return (0);
	combine_ans(from_num, answer, base_to, size - 1);
	answer[size] = '\0';
	return (answer);
}
/*
#include <stdio.h>
int main(void)
{	
	printf("%s\n", ft_convert_base("--34112", "9876543210", "456789"));
	return (0);
}*/
