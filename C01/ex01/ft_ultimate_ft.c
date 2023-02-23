/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:50:38 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/15 12:23:48 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int nbr;
	int *p1_nbr = &nbr;
	nt **p2_nbr = &p1nbr;
	ft_ultimate_ft(&nbr);
	ft_putchar(nbr / 10 + '0');
	ft_putchar(nbr % 10 + '0');
	return(0);
}
