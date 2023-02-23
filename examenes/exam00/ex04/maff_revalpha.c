/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:35:20 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/15 19:58:10 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_revalpha(void)
{
	char	z;

	z = 'Z';
	while (z != 96)
	{
		if (z % 2 == 0)
		{
			if (z == 'Z')
				write(1, &z, 1);
			else
			{
				z = z - 32;
				write(1, &z, 1);
			}
		}
		else
		{
			z = z + 32;
			write(1, &z, 1);
		}
	z--;
	}
}

int	main(void)
{
	ft_revalpha();
	return (0);
}
