/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:39:45 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/11 11:49:10 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	calc_size(int nb)
{
	int		size;

	size = 0;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

void	write_str(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{	
	char	answer[12];
	int		n;
	int		size;

	n = nb;
	size = calc_size(n);
	if (n == 0)
		write (1, "0", 1);
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		answer[0] = 45;
		n = -nb;
		size++;
	}
	answer[size] = '\0';
	while (n > 0)
	{
		answer[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	write_str(answer);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2345);
	printf("\n");
	ft_putnbr(2147483647);
}*/
