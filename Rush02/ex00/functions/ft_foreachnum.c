/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreachnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danserra <danserra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:24:45 by danserra          #+#    #+#             */
/*   Updated: 2023/02/19 21:24:49 by danserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_numtostr(int number, char ***diccionario);
void	ft_writenum(int index, char ***diccionario);

void	ft_foreachnum(int *arraynums, char ***diccionario)
{
	int	indexarr;
	int	indexnum;

	indexarr = 0;
	while (arraynums[indexarr])
	{
		indexnum = ft_numtostr(arraynums[indexarr], diccionario);
		if (indexnum != -1)
		{
			ft_writenum(indexarr, diccionario);
		}
		else
		{
			write(1, "Dict Error\n", 11);
			break ;
		}
		indexarr++;
	}
}
