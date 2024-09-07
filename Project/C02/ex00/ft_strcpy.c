/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:21:02 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/25 19:01:39 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// int main(){
// 	char source[] = "hello";
// 	char des[] = "temp" ;
// 	printf("%s\n", des);
// 	ft_strcpy(des, source);
// 	printf("%s\n", des);
// 	return 0;
// }