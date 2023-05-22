/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:36:31 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/20 19:12:33 by gykoh            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	tmp_nb;

	tmp_nb = nb;
	if (nb <= 2)
		return (2);
	else if (nb > 2147483629)
		return (2147483647);
	else
	{
		while (ft_is_prime(tmp_nb) == 0)
		{
			tmp_nb++;
		}
		return (tmp_nb);
	}
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_find_next_prime(-5));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(2147483645));
}*/
