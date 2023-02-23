/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-sttrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:32:07 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/15 21:05:46 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		count;
	int		tam;
	char	swap;

	tam = 0;
	while (str[tam] != '\0')
	{
	tam++;
	}
	while (count < (tam / 2))
	{
		swap = str[count];
		str[count] = str[tam - 1 - count];
		str[tam - 1 - count] = swap;
		count++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Hello";

//	str = "Hello";
	//*str = ft_strrev(str);
	printf("%s", ft_strrev(str));
	return (0);
}
