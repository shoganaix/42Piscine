/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:54:14 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/19 12:35:32 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while ((s1[counter] == s2[counter]) && s1[counter] != '\0'
		&& s2[counter] != '\0' && counter < (n - 1))
		counter++;
	return (s1[counter] - s2[counter]);
}
