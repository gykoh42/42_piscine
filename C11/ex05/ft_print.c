/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:40:49 by gykoh             #+#    #+#             */
/*   Updated: 2023/03/01 10:39:00 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

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

void	ft_print(int num1, char operator, int num2)
{
	int		answer;
	int		(*fp[5])(int, int);

	answer = 0;
	fp[0] = ft_plus;
	fp[1] = ft_minus;
	fp[2] = ft_multiple;
	fp[3] = ft_divide;
	fp[4] = ft_mod;
	if (operator == '+')
		answer = fp[0](num1, num2);
	else if (operator == '-')
		answer = fp[1](num1, num2);
	else if (operator == '*')
		answer = fp[2](num1, num2);
	else if (operator == '/')
		answer = fp[3](num1, num2);
	else if (operator == '%')
		answer = fp[4](num1, num2);
	ft_putnbr(answer);
}
