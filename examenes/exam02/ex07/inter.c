/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:52:30 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/17 12:39:19 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_checkdoubles(char a, char *argv1, int count1)
{
	int	count3;

	count3 = 0;
	while(count3 < count1)
	{
		if(argv1[count3] == a)
			return (0);
	count3++;
	}
return (1);
}

void	ft_inter(char *argv1, char *argv2)
{
	int	count1;
	int count2;

	count1 = 0;
	while (argv1[count1])
	{
		count2 = 0;
		while (argv2[count2])
		{
			if(argv2[count2] == argv1[count1])
			{
				if(ft_checkdoubles(argv2[count2], argv1, count1) == 1)
				{
					write(1, &argv1[count1], 1);
					break;
				}
			}
		count2++;
		}
	count1++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
