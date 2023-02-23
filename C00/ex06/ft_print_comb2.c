/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:19:40 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/07 18:33:12 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	comb1;
	int	comb2;

	comb1 = 0;
	while (comb1 <= 98)
	{
		comb2 = comb1 + 1;
		while (comb2 <= 99)
		{
			ft_putchar((comb1 / 10) + '0');
			ft_putchar((comb1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((comb2 / 10) + '0');
			ft_putchar((comb2 % 10) + '0');
			if (comb1 != 98 || comb2 != 99)
			{
				write(1, ", ", 2);
			}
			comb2++;
		}
		comb1++;
	}
}
