/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:06:15 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/15 20:31:23 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int				count1;
	int				count2;
	int				n;

	count1 = 0;
	count2 = 0;
	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}
	n = count1 - count2;
	return (n);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "a";
	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
