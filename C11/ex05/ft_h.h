/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:53:11 by gykoh             #+#    #+#             */
/*   Updated: 2023/03/01 10:38:22 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H
# include <unistd.h>

void	change_num(char *str1, char operator, char *str2);
void	write_nb_recur(long long nb);
void	ft_putnbr(int nb);
void	ft_print(int num1, char operator, int num2);
int		ft_plus(int num1, int num2);
int		ft_minus(int num1, int num2);
int		ft_multiple(int num1, int num2);
int		ft_divide(int num1, int num2);
int		ft_mod(int num1, int num2);
int		ft_atoi(char *str);

#endif
