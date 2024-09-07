/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:35:24 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/26 17:38:07 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != 0)
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(){
// 	char source[] = "hello";
// 	char *des = calloc(5 + 1, sizeof(char));

// 	// printf("%d\n", strlcpy(des, source, sizeof(des)));
// 	printf("%d\n", ft_strlcpy(des, source, 6));
// 	printf("%s\n", des);
// 	return 0;
// }