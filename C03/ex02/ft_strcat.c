/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:01:01 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 19:15:03 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	while (dest[counter1] != '\0')
	{
		counter1++;
	}
	counter2 = 0;
	while (src[counter2] != '\0')
	{
		dest[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	dest[counter1] = '\0';
	return (dest);
}
