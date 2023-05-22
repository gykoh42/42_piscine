/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:19:45 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/27 20:55:20 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			cnt++;
		while (str[i] != '\0' && !check_sep(str[i], charset))
			i++;
	}
	return (cnt);
}

int	each_words_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !check_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_combine(char *str, char *charset)
{
	int		word_len;
	int		i;
	char	*answer;

	i = 0;
	word_len = each_words_len(str, charset);
	answer = (char *)malloc(sizeof(char) * (word_len + 1));
	while (i < word_len)
	{
		answer[i] = str[i];
		i++;
	}
	answer[i] = '\0';
	return (answer);
}

char	**ft_split(char *str, char *charset)
{
	char	**answer;
	int		i;

	i = 0;
	answer = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			answer[i] = ft_combine(str, charset);
			i++;
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	answer[i] = 0;
	return (answer);
}
