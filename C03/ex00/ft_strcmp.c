/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:33:22 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/18 18:53:25 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] == s2[counter]) && (s1[counter] != '\0')
		&& (s2[counter] != '\0'))
		counter++;
	return (s1[counter] - s2[counter]);
}
