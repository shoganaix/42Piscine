/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:21:43 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/19 12:46:20 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[counter1])
	{
		counter2 = 0;
		while ((str[counter1 + counter2] != '\0')
			&& ((str[counter1 + counter2]) == to_find[counter2]))
		{
			if (to_find[counter2 + 1] == '\0')
				return (&str[counter1]);
			counter2++;
		}
		counter1++;
	}
	return (0);
}
