/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:54:32 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/20 19:10:37 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	answer;

	i = nb;
	answer = 1;
	if (nb < 0)
		return (0);
	while (i >= 1)
	{
		answer *= i;
		i--;
	}
	return (answer);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(0));
}*/
