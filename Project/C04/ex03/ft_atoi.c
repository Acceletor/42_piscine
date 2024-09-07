/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:48:59 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/09/04 16:41:57 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	iterate_i(int *i, int *count_sign, char *str)
{
	while (str[*i] == ' ' || (str[*i] >= '\a' && str[*i] <= '\r'))
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-' )
			*count_sign += 1;
		*i += 1;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		k;
	int		res;
	int		count_sign;
	int		i;

	k = 1;
	res = 0;
	count_sign = 0;
	i = 0;
	iterate_i(&i, &count_sign, str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	if (count_sign % 2 != 0)
		k = -1;
	return (res * k);
}

// #include <stdio.h>
// int	main()
// {
// 	int	num;
// 	num = ft_atoi(" \t\v -+- -1325632167");
// 	printf("%d", num);
// 	return (0);
// }