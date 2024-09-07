/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:22:25 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/26 14:25:08 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*head;

	head = str;
	while (*str != 0)
	{
		if (*str < 'A' || *str > 'Z')
			str++;
		else
		{
			*str = *str + 32 ;
			str++;
		}
	}
	return (head);
}

// #include <stdio.h>
// int main(){
// 	char example[] = "~Great JOB!! It works.";
//     ft_strlowcase(example);
// 	printf("%s\n",example);
// 	return 0;
// }