/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:10:03 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 11:58:18 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	raiz;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	raiz = 2;
	if (b >= 2)
	{
		while (raiz * raiz <= b)
		{
			if (raiz * raiz == b)
			{
				return (raiz);
			}
			raiz++;
		}
	}
	return (0);
}

/*#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int nb = 25;
    int raiz = ft_sqrt(nb);
    printf("La raiz de %d es igual a %d\n", nb, raiz);
    return (0);
}*/
