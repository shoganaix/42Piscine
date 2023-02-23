/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:17:23 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/15 19:34:45 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alphabet(void)
{
	char a;

	a = 'a';
	while (a != 91)
	{
		if (a % 2 == 0)
		{
		a = a - 32;
		write(1, &a, 1);
		}
		else
		{
			if (a != 'a')
			a = a + 32;
		write(1, &a, 1);
		}
	a++;
	}
}

int	main(void)
{
	ft_alphabet();
	return (0);
}
