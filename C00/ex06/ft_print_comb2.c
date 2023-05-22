/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:13:49 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/09 20:33:25 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_char(int i)
{
	int		bef_i;
	int		aft_i;
	char	bef_c;
	char	aft_c;

	bef_i = i / 10;
	aft_i = i % 10;
	bef_c = bef_i + '0';
	aft_c = aft_i + '0';
	write (1, &bef_c, 1);
	write (1, &aft_c, 1);
}

void	ft_print_comb2(void)
{
	int		first;
	int		second;

	first = 0;
	second = 0;
	while (first <= 97)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_write_char(first);
			write (1, " ", 1);
			ft_write_char(second);
			write (1, ", ", 2);
			second++;
		}
		first++;
	}
	write (1, "98 99", 5);
}
/*
#include <stdio.h>

int main(void)
{
   ft_print_comb2();
}*/
