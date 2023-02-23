/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:59:50 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/15 12:22:36 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int nbr;

	ft_ft(&nbr);
	ft_putchar(nbr / 10 + '0');
	ft_putchar(nbr % 10 + '0');
	return(0);
}*/
