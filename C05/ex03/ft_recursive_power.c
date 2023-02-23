/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:21:13 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 01:16:15 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power > 1)
	{	
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (i);
}

/*#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int base = 2;
    int exponente = 5;
    int resultado = ft_recursive_power(base, exponente);
    printf("%d elevado a la %d es igual a %d\n", base, exponente, resultado);
    return 0;
}*/
