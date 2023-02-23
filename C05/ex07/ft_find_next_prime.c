/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:25:50 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 13:54:01 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
    int nb = 6;
    int res = ft_find_next_prime(nb);
	printf("El siguiente numero primo a %d es %d\n", nb, res);
    return (0);
}*/
