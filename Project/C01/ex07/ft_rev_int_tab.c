/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:44:22 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/25 14:56:04 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int main()
// {
// 	int nums[] = {1,5,3,4};
// 	for( int i = 0; i < 4; i++)
// 	{
// 		printf("%d ", nums[i]);
// 	}
// 	printf("\n");
// 	ft_rev_int_tab(nums, 4);
// 	for( int i = 0; i < 4; i++)
// 	{
// 		printf("%d ", nums[i]);
// 	}
// 	printf("\n");
// }
