/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:18:11 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/16 11:04:54 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	src_idx;

	i = 0;
	src_idx = 0;
	while (dest[i] != '\0')
		i++;
	while (src[src_idx] != '\0')
	{
		dest[i] = src[src_idx];
		i++;
		src_idx++;
	}
	dest[i] = '\0';
	return (dest);
}
