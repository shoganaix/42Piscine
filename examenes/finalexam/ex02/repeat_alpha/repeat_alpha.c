/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:43:19 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/23 19:08:10 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include<unistd.h>

int ft_repeat_alpha(char i)
{
	int resta;

		if(i >= 'A' && i <= 'Z')
			resta = i - 61 + 1;
		if (i >= 'a' && i <= 'z')
			resta = i - 97 + 1;
		else
			resta = 1;
		return (resta);

}
int	main(int argc, char **argv)
{
	int i = 0;
	int	repeat;

	if (argc == 2)
		{
			while(argv[1][i])
			{
				repeat = ft_repeat_alpha(argv[1][i]);
				while (repeat > 1)
				{
					write(1, &argv[1][i], 1);
					repeat--;
				}
				i++;
			}
		}
	else 
		write(1, "\n", 1);
	return (0);
}
