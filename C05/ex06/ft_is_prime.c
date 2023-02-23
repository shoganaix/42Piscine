/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:34:05 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/21 12:09:25 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

/*int main(void)
{
    int nb = 3;
    int bin = ft_is_prime(nb);
    if(bin == 1)
		printf("El numero %d es primo\n", nb);
	else
		    printf("El numero %d no es primo o da error\n", nb);
    return (0);
}*/
