/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:07:27 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/20 19:12:20 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(100));
	printf("%d\n", ft_is_prime(256));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(2147483646));
}*/
