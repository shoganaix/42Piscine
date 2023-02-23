/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:15:10 by msoriano          #+#    #+#             */
/*   Updated: 2023/02/11 13:02:44 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a = 10;
	int b = 3;
	int div;
	int mod;
	int *pdiv = &div;
	int *pmod = &mod;
	ft_div_mod(a, b, pdiv, pmod);
	printf("%d", div);
}*/
