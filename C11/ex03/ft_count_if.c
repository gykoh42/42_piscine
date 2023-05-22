/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:25:52 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/28 19:33:28 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	tmp;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < length)
	{
		tmp = f(tab[i]);
		if (tmp != 0)
			cnt++;
		i++;
	}
	return (cnt);
}
