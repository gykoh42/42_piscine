/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:49:37 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/16 11:04:24 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	str_idx;
	unsigned int	find_idx;

	str_idx = 0;
	find_idx = 0;
	if (to_find[find_idx] == '\0')
		return (str);
	while (str[str_idx] != '\0')
	{
		while (str[str_idx + find_idx] == to_find[find_idx]
			&& str[str_idx + find_idx] != '\0')
			find_idx++;
		if (to_find[find_idx] == '\0')
			return (str + str_idx);
		str_idx++;
		find_idx = 0;
	}
	return (0);
}
