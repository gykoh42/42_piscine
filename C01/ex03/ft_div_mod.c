/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:39:25 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/11 20:00:06 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		mox;
	int		nameoji;

	mox = a / b;
	nameoji = a % b;
	*div = mox;
	*mod = nameoji;
}
/*
#include <stdio.h>

int main(void)
{
	int a = 19;
	int b = 3;
	int div = 0;
	int mod = 0;
	
	ft_div_mod(a, b, &div, &mod);

	printf("%d\n", div);
	printf("%d\n", mod);
}*/
