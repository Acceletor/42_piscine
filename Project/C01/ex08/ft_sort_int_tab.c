/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:59:34 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/25 15:47:30 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stdio.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	min_idx;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		temp = tab[i];
		min_idx = i;
		while (j < size)
		{
			if (tab[j] < temp)
			{
				temp = tab[j];
				min_idx = j;
			}
			j++;
		}
		tab[min_idx] = tab[i];
		tab[i] = temp;
		i++;
	}
}

// int main()
// {
// 	int nums[] = {64, 25, 12, 22, 11};
// 	for( int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", nums[i]);
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(nums, 5);
// 	for( int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", nums[i]);
// 	}
// 	printf("\n");
// }