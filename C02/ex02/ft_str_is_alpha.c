/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 04:47:36 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 17:29:07 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0')
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if ((str[count] >= 65 && str[count] <= 90)
			|| (str[count] >= 97 && str[count] <= 122))
			count++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
	ft_str_is_alpha("4a");
	return(0);
}*/
