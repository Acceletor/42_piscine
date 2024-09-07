/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initprintgrid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:29:49 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/09/01 21:24:08 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#define SIZE 4

int	**create2darray(int size)
{
	int	**ipp;
	int	i;

	ipp = malloc(8 * size);
	i = 0;
	while (i < size)
	{
		ipp[i] = malloc(4 * size);
		i++;
	}
	return (ipp);
}

void	free2dintarray(int **ipp, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(ipp[i]);
		i++;
	}
	free(ipp);
}

void	fill_zero(int **ipp, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ipp[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	printgrid(int **ipp, int size)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = ipp[i][j] + '0';
			write(1, &c, 1);
			if (j != size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
