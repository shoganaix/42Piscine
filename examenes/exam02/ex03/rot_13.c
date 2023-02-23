/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:44:03 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/16 04:17:05 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot(char *str)
{
	int		count;
	char	c;

	count = 0;
	while(str[count])
	{
		if(str[count] <= 109)
		{
			if(str[count] == ' ')
            c = ' ';
            else
			c = str[count] + 13;
		}	
		else	
		{
			c = str[count] - 13;
		}
		write(1, &c, 1);
		count++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_rot("My horse is Amazing");
	return (0);
}
