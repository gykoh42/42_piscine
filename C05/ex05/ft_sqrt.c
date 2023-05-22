/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:06:24 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/20 19:11:57 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(2147483646));
	printf("%d\n", ft_sqrt(-2147483647)); 
}*/
