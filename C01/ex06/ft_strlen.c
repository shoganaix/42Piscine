/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:38:28 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/15 12:31:29 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_chartoint(int a)
{
		int	b;
		int	c;

		write(1, "La longitud de la cadena es: ", 29);
	if (a >= 10)
	{
		b = a / 10;
		c = a % 10;
		ft_putchar(b + '0');
		ft_putchar(c + '0');
	}
	else
		ft_putchar(a + '0');
}*/
int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*int main()
{
	ft_strlen("Hello world!");
	return(0);
}*/
