/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolodym <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:20:49 by dvolodym          #+#    #+#             */
/*   Updated: 2024/08/25 11:11:01 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	select_c(char *c, int w, int h, int *p)
{
	if ((p[1] == 1 || p[1] == w) && p[0] == 1)
	{
		*c = 'A';
	}
	else if ((p[1] == 1 || p[1] == w) && p[0] == h)
	{
		*c = 'C';
	}
	else if ((p[1] != 1 && p[1] != w) && (p[0] != 1 && p[0] != h))
	{
		*c = ' ';
	}
	else
	{
		*c = 'B';
	}
}

void	rush(int x, int y)
{
	int		coord[2];
	char	c;
	char	*character;

	coord[0] = 1;
	coord[1] = 0;
	character = &c;
	while (coord[0] <= y)
	{
		coord[1]++;
		select_c(character, x, y, coord);
		ft_putchar(c);
		if (coord[1] == x)
		{
			ft_putchar('\n');
			coord[0]++;
			coord[1] = 0;
		}
	}
}
