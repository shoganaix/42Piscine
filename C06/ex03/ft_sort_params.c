/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:35:37 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 20:02:09 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] == s2[counter]) && (s1[counter] != '\0')
		&& (s2[counter] != '\0'))
		counter++;
	return (s1[counter] - s2[counter]);
}

void	ft_print_params(char *argv)
{
	while (*argv)
	{
		write(1, argv, 1);
		argv++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*swap;

	i = 1;
	while (i < (argc - 1))
	{
		if (ft_strcmp(argv[i], argv [i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
