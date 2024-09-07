/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:58:34 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/26 13:15:39 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
//     printf("%d\n", ft_str_is_uppercase("helllooo")); //0
//     printf("%d\n", ft_str_is_uppercase("     35")); //0
// 	printf("%d\n", ft_str_is_uppercase(""));//1
// 	printf("%d\n", ft_str_is_uppercase("     2wer")); //0
// 	printf("%d\n", ft_str_is_uppercase("HJKKL")); //1
// 	printf("%d\n", ft_str_is_uppercase("A ")); //0
// 	printf("%d\n", ft_str_is_uppercase(" Z")); //0
// 	return 0;
// }