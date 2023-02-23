/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:08:49 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/16 00:37:24 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_word(char *str)
{
	int	count;

	count = 0;
	while(str[count] != '\0' && str[count] != ' ')
	{	
			write(1, &str[count], 1);
			count++;
	}
	write(1, &"\n", 1);	
}

int	main(void)
{
	ft_first_word("");
	return (0);
}
