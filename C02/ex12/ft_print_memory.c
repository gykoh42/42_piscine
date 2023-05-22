/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:44:57 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/15 09:52:50 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned long long addr)
{
	char			*hex;

	hex = "0123456789abcdef";
	if (addr >= 16)
	{
		ft_print_hex(addr / 16);
		ft_print_hex(addr % 16);
	}
	else
		write (1, &hex[addr % 16], 1);
}

void	ft_write_hex(unsigned long long addr, unsigned int n)
{
	unsigned long long	tmp;

	tmp = addr;
	while (tmp != 0)
	{
		tmp /= 16;
		n++;
	}
	tmp = 0;
	while (n + tmp < 16)
	{
		write (1, "0", 1);
		tmp++;
	}
	ft_print_hex(addr);
	write (1, ":", 1);
}

void	ft_write_char_hex(unsigned char *addr, unsigned int length)
{
	unsigned int	i;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (i < length)
	{
		if (i % 2 == 0)
			write (1, " ", 1);
		write (1, &hex[addr[i] / 16], 1);
		write (1, &hex[addr[i] % 16], 1);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			write (1, " ", 1);
		write (1, "  ", 2);
		i++;
	}
}

void	ft_write_ascii(unsigned char *addr, unsigned int length)
{
	unsigned int	i;

	i = 0;
	while (i < length)
	{
		if ((addr[i] >= 0 && addr[i] < 32) || addr[i] >= 127)
			write (1, ".", 1);
		else
			write (1, &addr[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	len;
	int				i;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (size != 0)
	{
		if (size / 16 != 0)
			len = 16;
		else
			len = size;
		ft_write_hex((unsigned long long)addr + i, 0);
		ft_write_char_hex(addr + i, len);
		write (1, " ", 1);
		ft_write_ascii(addr + i, len);
		write(1, "\n", 1);
		size -= len;
		i += 16;
	}
	return (addr);
}
