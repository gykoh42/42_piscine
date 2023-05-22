/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:39:08 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/18 12:00:19 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nb_recur(long long nb)
{
	char	char_number;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		write_nb_recur(nb);
	}
	else if (nb >= 10)
	{	
		write_nb_recur(nb / 10);
		write_nb_recur(nb % 10);
	}
	else
	{
		char_number = nb + '0';
		write(1, &char_number, 1);
	}
}

void	ft_putnbr(int nb)
{
	write_nb_recur((long long)nb);
}
/*
#include <stdio.h>

int main(void)
{

	ft_putnbr(2147483647);
}*/
