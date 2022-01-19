/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:36:35 by ktaka             #+#    #+#             */
/*   Updated: 2021/11/10 23:36:39 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*unsigned_char_b;

	i = 0;
	unsigned_char_b = (unsigned char *)b;
	while (i < len)
	{
		unsigned_char_b[i] = c;
		i++;
	}
	return (b);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	str1[] = {1, 2, 3, 4, 5};
// 	char	str2[] = "AB\0CD\0EF\0G";
// 	int	*p;
// 	char	*q;
// 	int	i;
// 	p = str1;
// 	q = str2;
// 	i = 0;
// 	printf("Before_memset\n");
// 	while (i < 5)
// 	{
// 		printf("%d", str1[i]);
// 		i++;
// 		p++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("[%c]", str2[i]);
// 		i++;
// 		q++;
// 	}
// 	printf("\n");
// 	printf("After_memset\n");
// 	p = str1;
// 	i = 0;
// 	memset(p, 0, 3);
// 	while (i < 5)
// 	{
// 		printf("%d", str1[i]);
// 		i++;
// 		p++;
// 	}
// 	printf("\n");
// 	q = str2;
// 	i = 0;
// 	memset(q, 0, 5);
// 	while (i < 10)
// 	{
// 		printf("[%c]", str2[i]);
// 		i++;
// 		p++;
// 	}
// 	printf("\n");
// 	printf("---------------\n");
// 	int	str3[] = {1, 2, 3, 4, 5};
// 	char	str4[] = "AB\0CD\0EF\0G";
// 	int	*r;
// 	char	*s;
// 	r = str3;
// 	s = str4;
// 	i = 0;
// 	printf("Before_ft_memset\n");
// 	while (i < 5)
// 	{
// 		printf("%d", str3[i]);
// 		i++;
// 		r++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("[%c]", str4[i]);
// 		i++;
// 		s++;
// 	}
// 	printf("\n");
// 	printf("After_memset\n");
// 	r = str3;
// 	i = 0;
// 	ft_memset(r, 0, 3);
// 	while (i < 5)
// 	{
// 		printf("%d", str3[i]);
// 		i++;
// 		r++;
// 	}
// 	printf("\n");
// 	s = str4;
// 	i = 0;
// 	ft_memset(s, 0, 5);
// 	while (i < 10)
// 	{
// 		printf("[%c]", str4[i]);
// 		i++;
// 		s++;
// 	}
// 	printf("\n");
// 	return (0);
// }

// #include <stdio.h>
// #include <string.h>
// #include <limits.h>

// int main(void)
// {
// 	size_t n = INT_MAX;
// 	n += 5;
// 	size_t	i;

// 	i = 0;
	// char *str = malloc(sizeof(char) * n);
	// if (str == NULL)
	// 	printf("Err\n");
	// else
	// {
	// 	ft_memset(str, 'a', n);
	// 	while (i < n)
	// 	{
	// 		printf("%c", str[i]);
	// 		i++;
	// 	}
	// }
	// free(str);

// 	int *arry = malloc(sizeof(int) * n);

// 	if (arry == NULL)
// 		printf("Err\n");
// 	else
// 	{
// 		memset(arry, 0, n);
// 		while (i < n)
// 		{
// 			printf("%d", arry[i]);
// 			i++;
// 		}
// 	}
// 	free(arry);
// 	return (0);
// }
