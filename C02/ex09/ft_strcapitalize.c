/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:13:15 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/19 13:04:56 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (counter == 0
			|| (!((str[counter - 1] >= 'A' && str[counter - 1] <= 'Z')
					|| (str[counter - 1] >= 'a' && str[counter - 1] <= 'z')
					|| (str[counter - 1] >= '0' && str[counter - 1] <= '9'))))
		{
			if (str[counter] >= 'a' && str[counter] <= 'z')
			{
				str[counter] = str[counter] - 32;
			}
		}
		else if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}

/*int	main(int argc, char **argv)
{
	ft_strcapitalize(argv[1]);
	return (0);
}*/
