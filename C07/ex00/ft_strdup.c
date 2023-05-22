/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:01:46 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/25 18:39:15 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*answer;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	answer = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!answer)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		answer[i] = src[i];
		i++;
	}
	answer[i] = '\0';
	return (answer);
}
