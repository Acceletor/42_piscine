/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:43:08 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/24 18:54:09 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;
	int	remider;

	result = a / b;
	remider = a % b;
	*div = result;
	*mod = remider;
}

// int main(){
// 	int num1;
// 	int num2;
// 	ft_div_mod(4,2, &num1, &num2);
// 	printf("%d %d\n", num1, num2);
// 	return 0;
// }