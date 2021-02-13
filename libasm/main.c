/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:19:29 by fngoc             #+#    #+#             */
/*   Updated: 2021/02/13 18:19:32 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char str1[50];
	char str2[50];
	// char str3[3];
	// char *str5;

	printf("\n");
	printf("strlen: %zu\n", strlen("123456789012"));
	printf("ft_strlen: %zu\n", ft_strlen("123456789012"));

	printf("\n");
	printf("strcpy: %s\n", strcpy(str1, "Hello world!\0"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "Hello world!\0"));

	printf("\n");
	printf("strcmp: %d\n", strcmp("555", "555"));
	printf("ft_strcmp: %d\n", ft_strcmp("555", "555"));

	printf("\n");
	write(1, "IT IS WRITE\n", strlen("IT IS WRITE\n"));
	ft_write(1, "IT IS WRITE\n", ft_strlen("IT IS WRITE\n"));
	
	// printf("\n");
	// ft_read(1, str3, 3);
	// str3[ft_strlen(str3)] = '\0';
	// printf("%s\n", str3);
	
	// printf("\n");
	// str5 = ft_strdup("I AM HERE!");
	// printf("%s\n", str5);
	return (0);
}
