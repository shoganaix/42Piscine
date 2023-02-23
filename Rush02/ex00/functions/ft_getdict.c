/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danserra <danserra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:49:31 by danserra          #+#    #+#             */
/*   Updated: 2023/02/18 23:49:34 by danserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_explodedict(char ***componets, char *buffer, int i);
void	ft_modifycounters(int *e, int *i, int *o);

void	ft_getdictionary(char *name, char ***componets)
{
	char	diccionarioarchiv;
	char	buffer[4097];
	int		readfile;
	int		index;

	index = 0;
	diccionarioarchiv = open(name, O_RDONLY);
	if (diccionarioarchiv == -1)
		return ;
	readfile = read(diccionarioarchiv, buffer, 4096);
	ft_explodedict(componets, buffer, index);
	close(readfile);
}

void	ft_explodedict(char ***componets, char *buffer, int index)
{
	int		estadorow;
	int		indexcomponents;
	int		indexpalabra;
	int		inum;

	estadorow = 1;
	indexcomponents = 0;
	indexpalabra = 0;
	inum = 0;
	while (buffer[index])
	{
		if (buffer[index] >= '0' && buffer[index] <= '9')
		{
			componets[indexcomponents][0][inum] = buffer[index];
			estadorow = 0;
			inum++;
		}
		if ((buffer[index] >= 'a' && buffer[index] <= 'z')
			|| (buffer[index] >= 'A' && buffer[index] <= 'Z'))
		{
			inum = 0;
			estadorow = 2;
			componets[indexcomponents][1][indexpalabra] = buffer[index];
			indexpalabra++;
		}
		else
		{
			if (estadorow == 2)
			{
				indexcomponents++;
				indexpalabra = 0;
				estadorow = 1;
			}
		}
		index++;
	}
}

void	ft_modifycounters(int *estrow, int *indexcomts, int *indexpa)
{
	if (*estrow == 2)
	{
		*indexcomts = *(indexcomts + 1);
		*indexpa = 0;
		*estrow = 1;
	}
}

// int main()
// {
// 	int record = 0;
// 	char ***diccionario = (char ***)malloc(sizeof(char **) * 60);
// 	while (record < 50)
// 	{
// 		diccionario[record] = (char **)malloc(sizeof(char *) * 2);
// 		diccionario[record][0] = (char *)malloc(sizeof(char) * 48);
// 		diccionario[record][1] = (char *)malloc(sizeof(char) * 48);
// 		record++;
// 	}
	
// 	ft_getdictionary("../dicts/numbers.dict", diccionario);
// 	for (int i = 0; i < 40; i++) {
// 		printf("%s.", diccionario[i][0]);
// 		printf("%s\n", diccionario[i][1]);
// 	}
// }
