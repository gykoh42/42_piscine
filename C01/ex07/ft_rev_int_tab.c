/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:46:43 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/12 11:51:48 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int	tab[100] = {1, 3, 5, 7, 9};
	ft_rev_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", tab[i]);
	}
}*/
