/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:32:03 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/23 12:12:44 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 2)
	{
		i = 0;
		while(argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
	}	
	write(1, "\n", 1);
}
