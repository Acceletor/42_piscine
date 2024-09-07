/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:53:47 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/09/02 14:37:33 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

void	display(int *arr, int n)
{
	int i;
    
    i = 0;
    while(i < n)
    {
        ft_putchar(arr[i] + '0');
        i++;
    }
    if (arr[0] != 10 - n)
        ft_putstr(", ");
}

int next_combination(int *arr, int n)
{
    int i;

    if (arr[n - 1] < 9)
    {
        arr[n - 1]++;
        return 1;
    }
    
    i = n - 1;
    while (i > 0 && arr[i - 1] == arr[i] - 1)
        i--;

    if (i == 0)
        return 0;

    arr[i - 1]++;
    while (i < n)
    {
        arr[i] = arr[i - 1] + 1;
        i++;
    }
    
    return 1;
}

void ft_print_combn(int n)
{
    int arr[n];
    int i;
    
    if (n <= 0 || n >= 10)
        return ;
    i = 0;
    while (i < n)
    {
        arr[i] = i;
        i++;
    }
    while (1)
    {
        display(arr, n);
        if (!next_combination(arr, n))
            break;
    }

}

// int main(){
//     ft_print_combn(2);
//     return 0;
// }

