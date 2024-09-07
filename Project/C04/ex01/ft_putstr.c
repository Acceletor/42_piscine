/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:57:16 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/09/02 12:59:56 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

// int main()
// {
// 	ft_putstr("helloo");
// 	return (0);
// }