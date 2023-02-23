/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numtostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danserra <danserra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:02:32 by danserra          #+#    #+#             */
/*   Updated: 2023/02/19 21:02:35 by danserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_numtostr(int number, char ***diccionario)
{
	int	index;
	int	numberascii;

	index = 0;
	while (diccionario[index])
	{
		numberascii = ft_atoi(diccionario[index][0]);
		if (numberascii == number)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
