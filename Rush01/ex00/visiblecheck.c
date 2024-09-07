/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visiblecheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamalsh <skamalsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:07:40 by skamalsh          #+#    #+#             */
/*   Updated: 2024/09/01 16:59:55 by skamalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

extern int	g_topclues[SIZE];
extern int	g_bottomclues[SIZE];
extern int	g_leftclues[SIZE];
extern int	g_rightclues[SIZE];

int	cvfromleft(int *line)
{
	int	max_seen;
	int	visible_count;
	int	i;

	max_seen = 0;
	visible_count = 0;
	i = 0;
	while (i < SIZE)
	{
		if (line[i] > max_seen)
		{
			visible_count++;
			max_seen = line[i];
		}
		i++;
	}
	return (visible_count);
}

int	cvfromright(int *line)
{
	int	max_seen;
	int	visible_count;
	int	i;

	max_seen = 0;
	visible_count = 0;
	i = SIZE - 1;
	while (i >= 0)
	{
		if (line[i] > max_seen)
		{
			visible_count++;
			max_seen = line[i];
		}
		i--;
	}
	return (visible_count);
}

int	cvfromtop(int **ipp, int col)
{
	int	max_seen;
	int	visible_count;
	int	row;

	max_seen = 0;
	visible_count = 0;
	row = 0;
	while (row < SIZE)
	{
		if (ipp[row][col] > max_seen)
		{
			visible_count++;
			max_seen = ipp[row][col];
		}
		row++;
	}
	return (visible_count);
}

int	cvfrombottom(int **ipp, int col)
{
	int	max_seen;
	int	visible_count;
	int	row;

	max_seen = 0;
	visible_count = 0;
	row = SIZE - 1;
	while (row >= 0)
	{
		if (ipp[row][col] > max_seen)
		{
			visible_count++;
			max_seen = ipp[row][col];
		}
		row--;
	}
	return (visible_count);
}

int	validity_check(int **ipp)
{
	int	row;
	int	col;

	row = 0;
	while (row < SIZE)
	{
		if (cvfromleft(ipp[row]) != g_leftclues[row]
			|| cvfromright(ipp[row]) != g_rightclues[row])
			return (-1);
		row++;
	}
	col = 0;
	while (col < SIZE)
	{
		if (cvfromtop(ipp, col) != g_topclues[col]
			|| cvfrombottom(ipp, col) != g_bottomclues[col])
		{
			return (-1);
		}
		col++;
	}
	return (0);
}
