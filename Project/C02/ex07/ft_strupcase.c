/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:49:19 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/26 14:18:59 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*head;

	head = str;
	while (*str != 0)
	{
		if (*str < 'a' || *str > 'z')
			str++;
		else
		{
			*str = *str - 32 ;
			str++;
		}
	}
	return (head);
}

// #include <stdio.h>
// int main(){
// 	char example[] = "~Great job";
//     ft_strupcase(example);
// 	printf("%s\n",example);
// 	return 0;
// }