/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 03:12:07 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/16 04:25:42 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot(char *str)
{
	int	count;
	char	c;

	count = 0;
	while(str[count])
	{
		if(str[count] == 122 || str[count] == 90)
			c = str[count] - 25;
		else
			if( 65 >= str[count] <= 122)
				c = str[count];
			else
			c = str[count] + 1;
			write(1, &c, 1);
		count++;
	}
	write(1, &"\n", 1);
}

int	main(void)
{
	ft_rot("AkjhZ zLKIJz , 23y") ;
	return (0);
}
