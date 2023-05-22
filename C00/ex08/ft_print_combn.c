/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:12:01 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/13 23:01:59 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recur_combn(int count, char *num, int idx, int n)
{
	int	i;

	i = 0;
	if (count == n)
	{
		while (i < n)
		{
			write (1, &num[i], 1);
			i++;
		}
		if (!(num[0] == 10 - n + '0'))
			write (1, ", ", 2);
	}
	else
	{
		while (idx <= 9)
		{
			num[count] = idx + '0';
			recur_combn(count + 1, num, idx + 1, n);
			idx++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	num[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		num[i] = '0';
		i++;
	}
	recur_combn(0, num, 0, n);
}
/*
int main (void)
{
	ft_print_combn(4);
}*/
