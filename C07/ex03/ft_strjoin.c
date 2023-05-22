/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:34:51 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/25 13:56:26 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char **str, int size)
{
	int				i;
	int				j;
	unsigned int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{	
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

unsigned int	ft_seplen(char *sep, int size)
{
	unsigned int	i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return ((unsigned int)((size - 1) * i));
}

void	*combine(char *answer, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	ans_idx;

	i = -1;
	ans_idx = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			answer[ans_idx] = strs[i][j];
			ans_idx++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i != (size - 1))
		{
			answer[ans_idx] = sep[j];
			ans_idx++;
			j++;
		}
	}
	answer[ans_idx] = '\0';
	return (answer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*answer;
	unsigned int	total_size;

	if (size == 0)
	{
		answer = (char *)malloc(sizeof(char));
		answer[0] = '\0';
		return (answer);
	}
	total_size = ft_strlen(strs, size) + ft_seplen(sep, size);
	answer = (char *)malloc(sizeof(char) * (total_size + 1));
	if (!answer)
		return (0);
	combine(answer, strs, sep, size);
	return (answer);
}
/*
#include <stdio.h>

int main(void)
{
	char *strs[100] = {"eushin", "is", "beautifull", "you!re", "welcome~~~@@" };
	char sep[100] = ":  :";
	int size = 5;
	printf("%s\n", ft_strjoin(size, strs, sep));
}*/
