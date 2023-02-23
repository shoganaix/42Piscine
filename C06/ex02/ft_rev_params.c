/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:05:52 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/20 21:36:21 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] && argc)
		{
			c = argv[j][i];
			write(1, &c, 1);
			i++;
		}
		write(1, &"\n", 1);
		j--;
	}
	return (0);
}
