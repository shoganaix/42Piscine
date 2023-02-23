/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 04:32:14 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/20 23:56:34 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	(void)argc;
	i = 0;
	while (argv[0][i])
	{
		c = argv[0][i];
		write(1, &c, 1);
		i++;
	}
	write(1, &"\n", 1);
	return (0);
}
