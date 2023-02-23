/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danserra <danserra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:29:50 by danserra          #+#    #+#             */
/*   Updated: 2023/02/19 22:29:53 by danserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		numero;

	numero = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				numero = 10 * numero + *str - '0';
				str++;
			}
			break ;
		}
		str++;
	}
	return (numero);
}
