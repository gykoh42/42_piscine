/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:42:52 by gykoh             #+#    #+#             */
/*   Updated: 2023/03/01 10:37:13 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	change_num(char *str1, char operator, char *str2)
{
	int	num1;
	int	num2;

	num1 = ft_atoi(str1);
	num2 = ft_atoi(str2);
	if (num2 == 0 && operator == '/')
	{
		write (1, "Stop : division by zero", 23);
		return ;
	}
	else if (num2 == 0 && operator == '%')
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	ft_print(num1, operator, num2);
}

int	main(int argc, char **argv)
{
	char	*op_arr;
	char	operator;

	if (argc == 4)
	{
		op_arr = argv[2];
		if ((op_arr[1] == '\0') && (op_arr[0] == '+' || op_arr[0] == '-'
				|| op_arr[0] == '*' || op_arr[0] == '/' || op_arr[0] == '%'))
		{
			operator = op_arr[0];
			change_num(argv[1], operator, argv[3]);
			write (1, "\n", 1);
		}
		else
		{
			write (1, "0", 1);
			write (1, "\n", 1);
			return (0);
		}
	}
	return (0);
}
