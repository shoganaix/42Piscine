/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:51:55 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 10:46:20 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (n > count)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*int	main(void)
{
	ft_strncpy("a", "Hello", 6);
	return (0);
}*/
