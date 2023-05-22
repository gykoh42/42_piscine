/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:16:57 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/27 10:06:05 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
