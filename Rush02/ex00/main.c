/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danserra <danserra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:16:53 by danserra          #+#    #+#             */
/*   Updated: 2023/02/18 14:16:57 by danserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_getdictionary(char *name, char ***componets);
int		*ft_filter(int n);
void	ft_startconvert(char *dictname, char ***diccionario, char *argv);
int		ft_isargvint(int argv);
int		ft_atoi(char *str);
void	ft_foreachnum(int *arraynums, char ***diccionario);

int	main(int av, char **argv)
{
	int		posicion;
	char	*nombredicct;

	char ***diccionario = (char ***)malloc(sizeof(char **) * 60);
	posicion = 0;
	while (posicion < 50)
	{
		diccionario[posicion] = (char **)malloc(sizeof(char *) * 2);
		diccionario[posicion][0] = (char *)malloc(sizeof(char) * 48);
		diccionario[posicion][1] = (char *)malloc(sizeof(char) * 48);
		posicion++;
	}
	if (av == 2)
	{
		nombredicct = "numbers.dict";
		ft_startconvert(nombredicct, diccionario, argv[1]);
	}
	else if (av == 3)
	{
		nombredicct = argv[1];
		ft_startconvert(nombredicct, diccionario, argv[2]);
	}
}

void	ft_startconvert(char *dictname, char ***diccionario, char *argv)
{
	int	*arraydigitos;
	int	isint;
	int	numberatoi;

	numberatoi = ft_atoi(argv);
	isint = ft_isargvint(numberatoi);
	if (isint == 1)
	{
		arraydigitos = ft_filter(numberatoi);
		ft_getdictionary(dictname, diccionario);
		ft_foreachnum(arraydigitos, diccionario);
		free(arraydigitos);
	}
	else
		write(1, "Error\n", 6);
}
