/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:13:15 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 01:13:46 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}

/*#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
    int base = 2;
    int exponente = 5;
    int resultado = ft_iterative_power(base, exponente);
    printf("%d elevado a la %d es igual a %d\n", base, exponente, resultado);
    return (0);
}*/
