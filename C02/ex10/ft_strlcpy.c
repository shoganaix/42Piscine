/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:53:28 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 18:22:37 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	bin;

	bin = ft_strlen(src);
	count = 0;
	if (size != 0)
	{
		while (src[count] != '\0' && count < (size - 1))
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (bin);
}
