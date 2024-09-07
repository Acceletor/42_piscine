/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:39:53 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/29 14:49:28 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*head;

	head = dest;
	i = 0;
	while (*dest != 0)
	{
		dest++;
	}
	while (i < nb && *src != 0)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	return (head);
}

// #include <stdio.h>
// int main()
// {
// 	char str1[] = "hello";
// 	char str2[] = "world!!";
// 	printf("%s", ft_strncat( str1, str2, 1) ); // hellow
// 	return 0;
// }
