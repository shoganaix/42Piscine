/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:15:26 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/22 21:37:28 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **str)
{
	int	counter;

	counter = 0;
	(void)argc;
	while(str[1][counter] != '\0')
	{
		write(1, &str[1][counter], 1);
		counter++;
	}
}
