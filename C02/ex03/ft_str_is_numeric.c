/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 05:16:57 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 17:33:49 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 48 && str[count] <= 57))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/*int main(void)
{
	ft_str_is_numeric("");
	return(0);
}*/
