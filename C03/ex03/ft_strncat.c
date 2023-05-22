/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:12:01 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/16 11:01:16 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	src_i;

	i = 0;
	src_i = 0;
	while (dest[i] != '\0')
		i++;
	while (src_i < nb && src[src_i] != '\0')
	{
		dest[i] = src[src_i];
		i++;
		src_i++;
	}
	dest[i] = '\0';
	return (dest);
}
