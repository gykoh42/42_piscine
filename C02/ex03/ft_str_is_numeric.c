/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:13:50 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/13 14:34:54 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_str_is_numeric("heldold2020984"));
	printf("%d\n", ft_str_is_numeric("988347827"));
	printf("%d\n", ft_str_is_numeric("dfjfk 09099"));
	printf("%d\n", ft_str_is_numeric(""));
}*/
