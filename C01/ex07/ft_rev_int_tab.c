/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:24 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/13 13:20:44 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;	
	int	aux;

	count = 0;
	while (count < (size / 2))
	{
		aux = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = aux;
		count++;
	}
}

/*int	main(void)
{
	int	tab[4] = {1, 2, 4, 3};
	int	size;
	int	count;

	size = 4;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}*/
