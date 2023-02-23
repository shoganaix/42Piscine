/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:43:22 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/23 20:07:33 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
			{
				argv[1][i] = argv[1][i] - 32;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
			{
				argv[1][i] = argv[1][i] + 32;
				write(1, &argv[1][i], 1);
			}
			else 
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
