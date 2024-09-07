/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:02:19 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/09/04 15:17:58 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	display(int c)
{
	if (c >= 10)
		display(c / 10);
	print_char(c % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		print_char('-');
		nb *= -1;
		display(nb);
	}
	else
	{
		display(nb);
	}
}

// int main()
// {
// 	ft_putnbr(-214);
// 	return 0;
// }