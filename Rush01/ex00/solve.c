/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:15:07 by skamalsh          #+#    #+#             */
/*   Updated: 2024/09/03 11:37:55 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

extern int	g_topclues[SIZE];
extern int	g_bottomclues[SIZE];
extern int	g_leftclues[SIZE];
extern int	g_rightclues[SIZE];

int		cvfromleft(int *line);
int		cvfromright(int *line);
int		cvfromtop(int **ipp, int col);
int		cvfrombottom(int **ipp, int col);
int		validity_check(int **ipp);
int		is_row_valid(int **ipp, int row);
int		is_column_valid(int **ipp, int col, int row);

int		move_to_next_row(int **ipp, int row);
int		place_number_in_column(int **ipp, int row, int col, int num);

int	fill_array(int **ipp, int row, int col)
{
	int	num;

	if (row == SIZE)
		return (validity_check(ipp));
	if (col == SIZE)
	{
		return (move_to_next_row(ipp, row));
	}
	num = 1;
	while (num <= SIZE)
	{
		if (place_number_in_column(ipp, row, col, num) == 0)
			return (0);
		num++;
	}
	return (-1);
}

int	move_to_next_row(int **ipp, int row)
{
	if (cvfromleft(ipp[row]) != g_leftclues[row]
		|| cvfromright(ipp[row]) != g_rightclues[row]
		|| !is_row_valid(ipp, row))
	{
		return (-1);
	}
	return (fill_array(ipp, row + 1, 0));
}

int	place_number_in_column(int **ipp, int row, int col, int num)
{
	ipp[row][col] = num;
	if (is_column_valid(ipp, col, row))
	{
		if (row == SIZE - 1)
		{
			if (cvfromtop(ipp, col) != g_topclues[col]
				|| cvfrombottom(ipp, col) != g_bottomclues[col])
			{
				// ipp[row][col] = 0; // we don´t 
				return (-1);
			}
		}
	}
	else
	{
		// ipp[row][col] = 0;
		return (-1);
	}
	if (fill_array(ipp, row, col + 1) == 0)
		return (0);
	// ipp[row][col] = 0;
	return (-1);
}
