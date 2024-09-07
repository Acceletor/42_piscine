/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:52:37 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/25 11:12:29 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	read_nums(char *str, int i, int k)
{
	int	res;

	res = 0;
	while (str[i] != 0 && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		if (k < 0)
		{
			res -= str[i++] - 48;
		}
		else
		{
			res += str[i++] - 48;
		}
	}
	return (res);
}

int	my_atoi(char *str)
{
	int	i;
	int	k;

	k = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '+')
	{
		i++;
	}
	if (str[i] == '-')
	{
		k = -1;
		return (-1);
	}
	return (read_nums(str, i, k));
}

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	width;
	int	height;

	if (argc == 3)
	{
		width = my_atoi(argv[1]);
		height = my_atoi(argv[2]);
		if (height > 0 && width > 0)
		{
			rush(width, height);
			return (0);
		}
	}
	write(1, "you should pass 2 positive integers as parameters", 49);
	return (1);
}
