/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:13:23 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 19:20:50 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter1;
	unsigned int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1])
		counter1++;
	while (src[counter2] != '\0' && counter2 < nb)
	{
		dest[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	dest[counter1] = '\0';
	return (dest);
}
