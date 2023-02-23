/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:58:47 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 11:46:11 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int	ft_error(char *str)
{
	int	counter;
	int	j;
	int	size;

	size = ft_strlen(str);
	counter = 0;
	if (str[0] == '\0' || size == 1)
		return (0);
	while (str[counter] != '\0')
	{
		if (str[counter] <= 32 || str[counter] == 127
			|| str[counter] == 43 || str[counter] == 45)
			return (0);
		j = counter + 1;
		while (j < ft_strlen(str))
		{
			if (str[counter] == str[j])
				return (0);
			j++;
		}
		counter++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		error;
	long	nb;

	error = ft_error(base);
	size = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < size)
			ft_putchar(base[nb]);
		if (nb >= size)
		{
			ft_putnbr_base(nb / size, base);
			ft_putnbr_base(nb % size, base);
		}
	}
}