/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:19:41 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 18:21:05 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 97 && str[count] <= 122))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/*int main(void)
{
	ft_str_is_lowercase("4a");
	return(0);
}*/
