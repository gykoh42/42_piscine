/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:03:48 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/21 21:44:40 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *argv1, char *argv2)
{
	unsigned int	i;

	i = 0;
	while ((argv1[i] == argv2[i]) && (argv1[i] != '\0' || argv2[i] != '\0'))
		i++;
	return ((unsigned char)argv1[i] - (unsigned char)argv2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_write_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != 0)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[j];
					argv[j] = tmp;
				}
				j++;
			}
			i++;
		}
		ft_write_argv(argv);
	}
	return (0);
}
