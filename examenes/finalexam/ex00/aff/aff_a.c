/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:18:16 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/22 13:06:38 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_aff_a(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] == 'a')
			write(1, "a", 1);
		counter++;
	}
	write(1, "\n", 1);
}	

int	main(int argc, char **argv)
{
	char *str;

	str = "Hola";
	if (argc != 1)
		write(1, "a\n", 2);
	else
	ft_aff_a(str);
}
