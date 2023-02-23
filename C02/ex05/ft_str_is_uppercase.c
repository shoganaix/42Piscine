/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:32:16 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 18:20:53 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 65 && str[count] <= 90))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/*int main(void)
{
	ft_str_is_uppercase("4a");
	return(0);
}*/
