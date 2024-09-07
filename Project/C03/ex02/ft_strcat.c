/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:47:17 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/08/29 12:45:27 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*head;

	head = dest;
	while (*dest != 0)
	{
		dest++;
	}
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (head);
}

// #include <stdio.h>
// #include <string.h>

// // Declare your custom ft_strcat function prototype
// char *ft_strcat(char *dest, char *src);

// int main() {
//     // Test case 1: Basic concatenation
//     char dest1[50] = "Hello, ";
//     char src1[] = "World!";
//     char dest2[50] = "Hello, ";

//     // Using the standard strcat function
//     strcat(dest1, src1);
//     // Using your ft_strcat function
//     ft_strcat(dest2, src1);

//     // Output the results
//     printf("Standard strcat result: %s\n", dest1);
//     printf("Your ft_strcat result:  %s\n", dest2);

//     // Verify if both results are the same
//     if (strcmp(dest1, dest2) == 0) {
//         printf("Test case 1 passed.\n");
//     } else {
//         printf("Test case 1 failed.\n");
//     }

//     // Test case 2: Concatenation with empty string
//     char dest3[50] = "Hello, ";
//     char src2[] = "";
//     char dest4[50] = "Hello, ";

//     // Using the standard strcat function
//     strcat(dest3, src2);
//     // Using your ft_strcat function
//     ft_strcat(dest4, src2);

//     // Output the results
//     printf("Standard strcat result: %s\n", dest3);
//     printf("Your ft_strcat result:  %s\n", dest4);

//     // Verify if both results are the same
//     if (strcmp(dest3, dest4) == 0) {
//         printf("Test case 2 passed.\n");
//     } else {
//         printf("Test case 2 failed.\n");
//     }

//     // Test case 3: Concatenation with both strings empty
//     char dest5[50] = "";
//     char src3[] = "";
//     char dest6[50] = "";

//     // Using the standard strcat function
//     strcat(dest5, src3);
//     // Using your ft_strcat function
//     ft_strcat(dest6, src3);

//     // Output the results
//     printf("Standard strcat result: %s\n", dest5);
//     printf("Your ft_strcat result:  %s\n", dest6);

//     // Verify if both results are the same
//     if (strcmp(dest5, dest6) == 0) {
//         printf("Test case 3 passed.\n");
//     } else {
//         printf("Test case 3 failed.\n");
//     }

//     // Test case 4: Concatenation with larger strings
//     char dest7[100] = "This is a larger ";
//     char src4[] = "string for concatenation.";
//     char dest8[100] = "This is a larger ";

//     // Using the standard strcat function
//     strcat(dest7, src4);
//     // Using your ft_strcat function
//     ft_strcat(dest8, src4);

//     // Output the results
//     printf("Standard strcat result: %s\n", dest7);
//     printf("Your ft_strcat result:  %s\n", dest8);

//     // Verify if both results are the same
//     if (strcmp(dest7, dest8) == 0) {
//         printf("Test case 4 passed.\n");
//     } else {
//         printf("Test case 4 failed.\n");
//     }

//     return 0;
// }
