/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:32:27 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/26 13:08:53 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int main(){
//     printf("%d\n", ft_str_is_numeric("helllooo")); //0
//     printf("%d\n", ft_str_is_numeric("     35")); //0
// 	printf("%d\n", ft_str_is_numeric(""));//1
// 	printf("%d\n", ft_str_is_numeric("     2wer")); //0
// 	printf("%d\n", ft_str_is_numeric("0123492")); //1
// 	printf("%d\n", ft_str_is_numeric("01 ")); //0
// 	return 0;
// }