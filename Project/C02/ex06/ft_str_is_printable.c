/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:18:54 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/26 13:47:16 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (*str < ' ' || *str > '~')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int main(){
//     printf("%d\n", ft_str_is_printable("helllo#@$oo")); //1
//     printf("%d\n", ft_str_is_printable("     35~")); //1
// 	printf("%d\n", ft_str_is_printable(""));//1
// 	printf("%d\n", ft_str_is_printable("    () 2wer")); //1
// 	printf("%d\n", ft_str_is_printable("HJKKL")); //1
// 	printf("%d\n", ft_str_is_printable("\n")); //0
// 	printf("%d\n", ft_str_is_printable(" \b")); //0
// 	return 0;
// }