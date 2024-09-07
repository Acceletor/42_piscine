/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:06:33 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/28 20:30:22 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res_d;
	unsigned int	res_s;
	unsigned int	i;
	unsigned int	j;

	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	i = res_d;
	j = 0;
	if (size <= res_d)
		return (res_s + size);
	while (i < size - 1 && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (res_d + res_s);
}
