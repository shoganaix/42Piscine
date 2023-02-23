/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danserra <danserra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:07:06 by danserra          #+#    #+#             */
/*   Updated: 2023/02/19 21:07:08 by danserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writenum(int index, char ***diccionario)
{
	int	indexword;

	indexword = 0;
	while (diccionario[index][1][indexword] != '\0')
	{
		write(1, &diccionario[index][1][indexword], 1);
	}
}
