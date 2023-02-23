/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:33:22 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/04 19:11:13 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ud;
	int	wd;

	wd = 1;
	while (wd <= y && x > 0)
	{
		ud = 1;
		while (ud <= x)
		{
			if ((ud == 1 && wd == 1)
				|| (ud == 1 && wd == y && ud == 1 && wd != 1))
				ft_putchar('A');
			else if ((ud == x && wd == y) || (ud == x && wd == 1))
				ft_putchar('C');
			else if ((ud == 1) || (ud == x) || (wd == 1) || (wd == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			ud++;
		}
		ft_putchar('\n');
		wd++;
	}
}
