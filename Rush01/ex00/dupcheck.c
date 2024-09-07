/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dupcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:12:57 by skamalsh          #+#    #+#             */
/*   Updated: 2024/09/01 19:59:20 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

int	is_row_valid(int **ipp, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = i + 1;
		while (j < SIZE)
		{
			if (ipp[row][i] == ipp[row][j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	is_column_valid(int **ipp, int col, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (ipp[i][col] == ipp[row][col])
			return (0);
		i++;
	}
	return (1);
}
