/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:49:22 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/11 13:01:46 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	moc;

	div = *a / *b;
	moc = *a % *b;
	*a = div;
	*b = moc;
}
/*int	main()
{
	int a = 5;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d" , b);
}*/
