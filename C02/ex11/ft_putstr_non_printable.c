/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:15:08 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/13 22:41:07 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	calc_hex_write(int str_i)
{
	char	*hex;

	hex = "0123456789abcdef";
	write (1, "\\", 1);
	write (1, &hex[str_i / 16], 1);
	write (1, &hex[str_i % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*tmp;
	int				i;

	tmp = (unsigned char *) str;
	i = 0;
	while (tmp[i] != '\0')
	{
		if ((tmp[i] >= 0 && tmp[i] < 32) || tmp[i] >= 127)
		{
			calc_hex_write(tmp[i]);
			i++;
		}
		else
		{
			write (1, &tmp[i], 1);
			i++;
		}
	}
}
