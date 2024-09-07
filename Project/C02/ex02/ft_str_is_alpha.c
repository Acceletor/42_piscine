/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:54:23 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/26 11:51:26 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		else if (str[i] >= 'a' && str[i] <= 'z')
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
//     printf("%d\n", ft_str_is_alpha("helllooo")); //1
//     printf("%d\n", ft_str_is_alpha("     35")); //0
// 	printf("%d\n", ft_str_is_alpha(""));//1
// 	printf("%d\n", ft_str_is_alpha("     2wer")); //0
// }