/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:25:57 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 17:38:48 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 32 && str[count] <= 126))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/*int main(void)
{
	ft_str_is_printable(4);
	return(0);
}*/
