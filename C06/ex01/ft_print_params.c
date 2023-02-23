/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:41:01 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/20 21:34:21 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			c = argv[j][i];
			write(1, &c, 1);
			i++;
		}
		write(1, &"\n", 1);
		j++;
	}
	return (0);
}
