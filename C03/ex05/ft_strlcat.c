/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:48:57 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/19 14:22:16 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	count2;
	unsigned int	res;

	count = 0;
	count2 = 0;
	res = 0;
	while (dest[count] != '\0')
		count++;
	while (src[res] != '\0')
		res++;
	if (size <= count)
		res += size;
	else
		res += count;
	while (src[count2] != '\0' && (count + 1) < size)
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (res);
}

/*int	main(void)
{
	char str1[20] = "Hello, ";
    char str2[] = "world!";
    unsigned int size = 15;
    // Copiar str2 en str1
    unsigned int len = ft_strlcat(str1, str2, size); 
    write(1, str1, len);
    write(1, "\n", 1);
    return (0);
}*/
