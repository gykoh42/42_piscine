/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:25:39 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/28 19:18:49 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*answer;

	answer = (int *)malloc(sizeof(int) * length);
	if (!answer)
		return (0);
	i = 0;
	while (i < length)
	{
		answer[i] = f(tab[i]);
		i++;
	}
	return (answer);
}
