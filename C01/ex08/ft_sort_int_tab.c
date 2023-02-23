/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:21:58 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/15 12:46:22 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	swap;

	while (size >= 0)
	{
		count = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				swap = tab [count];
				tab[count] = tab [count + 1];
				tab [count + 1] = swap;
			}
			count++;
		}
		size--;
	}
}

/*int	main(void)
{
	int	tab[4] = {4, 2, 1, 3};
	int	size;

	size = 4;
	ft_sort_int_tab(&tab, size);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}*/
