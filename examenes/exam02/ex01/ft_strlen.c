/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:59:08 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/16 00:08:16 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	ft_strlen("Me come los huevos el puto programa");
	return (0);
}
