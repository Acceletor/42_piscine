/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:05:37 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/29 15:14:27 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*head;
	char	*needle;

	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		head = to_find;
		needle = str;
		while (*needle == *head && *head != 0 && *needle != 0)
		{
			needle++;
			head++;
		}
		if (*head == 0)
			return (str);
		str++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "hello, world!";
// 	char str1[] = "world";
// 	printf("%s", ft_strstr(str, str1));
// 	return 0;
// }