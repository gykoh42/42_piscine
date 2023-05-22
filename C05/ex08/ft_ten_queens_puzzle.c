/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:30:41 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/23 08:52:04 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	calc_abs(int a, int b)
{
	if (a - b < 0)
		return (b - a);
	else
		return (a - b);
}

int	check_map(int *map, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if ((map[x] == map[i]) || calc_abs(map[x], map[i]) == x - i)
			return (0);
		i++;
	}
	return (1);
}

void	print_map(int *map)
{
	int		i;
	char	tmp_map;

	i = 0;
	while (i < 10)
	{
		tmp_map = map[i] + '0';
		write(1, &tmp_map, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	solve_queens(int *cnt, int *map, int x)
{
	int	i;

	i = 0;
	if (x == 10)
	{
		*cnt = *cnt + 1;
		print_map(map);
		return ;
	}
	while (i < 10)
	{
		map[x] = i;
		if (check_map(map, x))
			solve_queens(cnt, map, x + 1);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	cnt;
	int	idx;
	int	map[10];

	cnt = 0;
	idx = 0;
	while (idx < 10)
	{
		map[idx] = 0;
		idx++;
	}
	solve_queens(&cnt, map, 0);
	return (cnt);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
}*/
