/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:23:39 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/25 13:58:34 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long	size;
	int			i;

	size = (long long)max - (long long)min;
	i = 0;
	if (size > 2147483647)
		return (-1);
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
 int	main(void)
{
	int	*range;
	int	size;

	size = ft_ultimate_range(&range, -2147483648, 2147483647);
	printf("ft_ult_range's return value: %d\n", size);
	for (int i = 0; i < size + 1; i++)
	{
		printf("ft_ult_range's %dth value: %d\n", i, range[i]);
	}
	return (0);
}*/
