/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:41:29 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/29 12:40:46 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		num;

	hex = "0123456789abcdef";
	while (*str != 0)
	{
		if (*str >= ' ' && *str <= '~' )
		{
			write(1, str, 1);
		}
		else
		{
			if (*str < 0)
				num = *str + 256;
			else
				num = *str;
			ft_putchar('\\');
			ft_putchar(hex[num / 16]);
			ft_putchar(hex[num % 16]);
		}
		str++;
	}
}
