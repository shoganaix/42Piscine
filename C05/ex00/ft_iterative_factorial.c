/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:51:29 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 00:55:35 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}

/*#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    int numero = 5;
    int resultado = ft_iterative_factorial(numero);
    printf("El factorial de %d es igual a %d\n", numero, resultado);
    return (0);
}*/
