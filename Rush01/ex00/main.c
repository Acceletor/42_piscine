/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:41:25 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/09/01 19:12:04 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 4

int	g_topclues[SIZE];
int	g_bottomclues[SIZE];
int	g_leftclues[SIZE];
int	g_rightclues[SIZE];

int		**create2darray(int size);
void	free2dintarray(int **ipp, int size);
void	printgrid(int **ipp, int size);
void	fill_zero(int **ipp, int size);
int		check_duplicate(int **ipp, int row, int col, int num);
int		fill_array(int **ipp, int row, int col);
void	printgrid(int **ipp, int size);
int		cvfromleft(int *line);
int		cvfromright(int *line);
int		cvfromtop(int **ipp, int col);
int		cvfrombottom(int **ipp, int col);
int		findlength(char *str);

int	extract_values(char *input, int *value, int max_values)
{
	int	totalnum;
	int	flag;

	flag = 0;
	totalnum = 0;
	while (*input != 0 && totalnum < max_values)
	{
		if (*input == ' ')
			flag = 0;
		else if (*input >= '1' && *input <= SIZE + '0' && flag == 0)
		{
			flag = 1;
			value[totalnum] = *input - '0';
			totalnum++;
		}
		else
			return (0);
		input++;
	}
	return (totalnum);
}

int	parse_input(char *input)
{
	int	values[SIZE * 4];
	int	totalnum;
	int	i;

	totalnum = extract_values(input, values, SIZE * 4);
	i = 0;
	if (totalnum != SIZE * 4)
		return (0);
	while (i < SIZE)
	{
		g_topclues[i] = values[i];
		g_bottomclues[i] = values[i + SIZE];
		g_leftclues[i] = values[i + 2 * SIZE];
		g_rightclues[i] = values[i + 3 * SIZE];
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	**array;

	if (argc == 2)
	{
		if (parse_input(argv[1]) == 1
			&& findlength(argv[1]) == SIZE * 4 * 2 - 1)
		{
			array = create2darray(SIZE);
			fill_zero(array, SIZE);
			if (fill_array(array, 0, 0) == 0)
				printgrid(array, SIZE);
			else
				write(1, "Error\n", 6);
			free2dintarray(array, SIZE);
		}
		else
			write (1, "Error\n", 6);
	}
	else
		write (1, "Error\n", 6);
	return (0);
}

int	findlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
