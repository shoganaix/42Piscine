/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:33:55 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 17:39:30 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}

/*int	main(void)
{
	ft_strupcase("me cagoENmiSM");
	return (0);
}*/
