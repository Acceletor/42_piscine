/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:26:47 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/27 13:21:57 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	if_digit(char *c)
{
	if (*c >= '0' && *c <= '9')
		return (1);
	return (0);
}

int	check_if_letter(char *c)
{
	if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		return (1);
	else if (if_digit(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*head;
	int		first;

	head = str;
	while (*str != 0)
	{
		first = 1;
		while (check_if_letter(str))
		{
			if ((*str >= 'A' && *str <= 'Z') && first != 1)
				*str += 32;
			else if ((*str >= 'a' && *str <= 'z') && first == 1)
				*str -= 32;
			first = 0;
			str++;
		}
		if (first == 1)
			str++;
	}
	*str = 0;
	return (head);
}

// #include <stdio.h>
// int main(){
// 	// char example[] = "Rekt12+ MDr 42424242L42";
// 	char example[] = "9z!KCme&+#Kv>MF.=U0sft";
// 	// char example[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     ft_strcapitalize(example);
// 	printf("%s\n",example);
// 	return 0;
// }