/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:12:06 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/23 20:39:30 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*answer;
	int	i;

	size = max - min;
	i = 0;
	if (size <= 0)
		return (0);
	answer = (int *)malloc(sizeof(int) * size);
	if (!answer)
		return (0);
	while (i < size)
	{
		answer[i] = i + min;
		i++;
	}
	return (answer);
}
