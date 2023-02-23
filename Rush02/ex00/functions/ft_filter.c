/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danserra <danserra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:25:02 by danserra          #+#    #+#             */
/*   Updated: 2023/02/19 21:25:03 by danserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

double	ft_expo(double base, int exponent);

int	ft_size(int nb)
{
	int	size;

	size = 0;
	while (nb != 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

int	*ft_filter(int n)
{
	int	size;
	int	*digits;
	int	i;
	int	digit;

	size = ft_size(n);
	digits = malloc(size * sizeof(int));
	i = 0;
	while (n != 0)
	{
		digit = n % 10;
		digits[size - i - 1] = digit * ft_expo(10, i);
		n /= 10;
		i++;
	}
	return (digits);
}

double	ft_expo(double base, int exponent)
{
	double	result;
	int		i;

	i = 0;
	result = 1;
	while (i < exponent)
	{
		result *= base;
		i++;
	}
	return (result);
}
