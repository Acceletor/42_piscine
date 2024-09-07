/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:25:54 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/26 13:11:11 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
//     printf("%d\n", ft_str_is_lowercase("helllooo")); //1
//     printf("%d\n", ft_str_is_lowercase("     35")); //0
// 	printf("%d\n", ft_str_is_lowercase(""));//1
// 	printf("%d\n", ft_str_is_lowercase("     2wer")); //0
// 	printf("%d\n", ft_str_is_lowercase("0123")); //0
// 	printf("%d\n", ft_str_is_lowercase("a ")); //0
// 	printf("%d\n", ft_str_is_lowercase(" a")); //0
// 	return 0;
// }