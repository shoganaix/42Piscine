/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:07:51 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 01:00:33 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
	{
		res *= nb * ft_recursive_factorial(nb - 1);
		nb = nb - 1;
	}
	if (nb < 0)
		return (0);
	return (res);
}

/*#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int numero = 5;
    int resultado = ft_recursive_factorial(numero);
    printf("El factorial de %d es igual a %d\n", numero, resultado);
    return 0;
}*/
