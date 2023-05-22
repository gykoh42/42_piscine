/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:46:59 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/16 16:30:59 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_str_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_idx;
	unsigned int	dest_idx;
	unsigned int	src_size;
	unsigned int	dest_size;

	src_idx = 0;
	dest_idx = 0;
	while (dest[dest_idx] != '\0')
		dest_idx++;
	dest_size = get_str_size(dest);
	src_size = get_str_size(src);
	if (size == 0 || size <= dest_size)
		return (src_size + size);
	while (src[src_idx] != '\0' && src_idx + dest_size < size - 1)
	{
		dest[dest_idx] = src[src_idx];
		dest_idx++;
		src_idx++;
	}
	dest[dest_idx] = '\0';
	return (dest_size + src_size);
}
