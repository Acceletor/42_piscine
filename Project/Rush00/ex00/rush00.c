/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:12:45 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/25 11:13:38 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_print(int i, int j, int height, int width)
{
	if (((i == 0 || i == height -1) && (j == 0 || j == width - 1)))
	{
		ft_putchar('o');
	}
	else if (i == 0 || i == height - 1)
	{
		ft_putchar('-');
	}
	else if (j == 0 || j == width - 1)
	{
		ft_putchar('|');
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
