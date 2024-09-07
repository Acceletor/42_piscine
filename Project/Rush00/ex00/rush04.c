/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:33:20 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/25 11:11:38 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_print(int i, int j, int height, int width)
{
	if ((i == 0 && j == 0))
	{
		ft_putchar('A');
	}
	else if (((i == height - 1 && j == width - 1) && (width > 1 && height > 1)))
	{
		ft_putchar('A');
	}
	else if ((i == height -1 && j == 0) || ((i == 0 && j == width -1)))
	{
		ft_putchar('C');
	}
	else if ((i == 0 || i == height - 1) || (j == 0 || j == width - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	print_rectangle(int width, int height)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < height)
	{
		check_print(i, j, height, width);
		if (j == width - 1)
		{
			ft_putchar('\n');
			i++;
			j = -1;
		}
		j++;
	}
}

void	rush(int x, int y)
{
	print_rectangle(x, y);
}
