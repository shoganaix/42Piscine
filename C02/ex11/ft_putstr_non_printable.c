/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:03:34 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/19 20:21:26 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa_translator(int c)
{
	char	*p_hexa;

	p_hexa = "0123456789abcdef";
	ft_putchar(p_hexa[(c / 16)]);
	ft_putchar(p_hexa[(c % 16)]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *) str;
	while (c[i] != '\0')
	{
		if ((c[i] >= 0 && c[i] < 32) || c[i] >= 127)
		{
			ft_putchar('\\');
			ft_hexa_translator(c[i]);
		}
		else
		{
			ft_putchar(c[i]);
		}
		++i;
	}
}
