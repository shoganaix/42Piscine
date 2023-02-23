/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:08:37 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/06 17:20:19 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int num1, int num2, int num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (num1 != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_print(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
