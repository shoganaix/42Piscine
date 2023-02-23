/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:23:51 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/17 10:52:01 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	if(argc != 2)
	{
		write(1, &"\n", 1);
	}
	else 
	{
		while(argv[1][count])
		{
			if(argv[1][count] == 32 || argv[1][count] == '\t')
					{ 
					break;
					}
			write(1, &argv[1][count], 1);
			count++;
		}
	}
return (0);
}
