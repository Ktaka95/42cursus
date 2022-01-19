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
	unsigned char	*unsigned_b;

	i = 0;
	unsigned_b = (unsigned char *)b;
	while (i < len)
	{
		unsigned_b[i] = c;
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
