/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:25:57 by gykoh             #+#    #+#             */
/*   Updated: 2023/03/01 08:17:43 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_ascend(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_descend(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_same(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) != 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if ((ft_check_ascend(tab, length, f)) || (ft_check_descend(tab, length, f))
		|| (ft_check_same(tab, length, f)))
		return (1);
	return (0);
}
/*
int	ft_compare(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a > b)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int    main(void)
{
	int tab[5] = {1,2,2,4,5};
    printf("%d", ft_is_sort(tab, 5, ft_compare));
}*/
