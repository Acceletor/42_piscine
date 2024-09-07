/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:51:34 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/09/04 16:47:19 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

int	is_base_valid(char *base, unsigned int length)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < length)
	{
		if (base[i] == '-' || base[i] == '+'
			|| base[i] < 32 || base[i] >= 127)
			return (1);
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	display_number_in_base(unsigned int nbr,
		unsigned int length, char *base)
{
	if (nbr == 0)
	{
		printchar(base[nbr % length]);
		return ;
	}
	if (nbr >= length)
		display_number_in_base(nbr / length, length, base);
	printchar(base[nbr % length]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	length;
	unsigned int	n;

	n = 0;
	length = 0;
	while (base[length] != 0)
		length++;
	if (is_base_valid(base, length) == 1 || !length || length <= 1)
		return ;
	if (nbr < 0)
	{
		printchar('-');
		n = (unsigned int)-nbr;
	}
	else
		n = (unsigned int)nbr;
	display_number_in_base(n, length, base);
}

// #include <limits.h>
// int main()
// {
//     ft_putnbr_base(70, "0123456789ABCDEF");
//     return 0;
// }