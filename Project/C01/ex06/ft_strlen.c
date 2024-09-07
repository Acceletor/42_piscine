/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:30:37 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/25 13:41:43 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stdio.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

// int main(){
// 	printf("%d", ft_strlen("hello "));
// 	return 0;
// }
