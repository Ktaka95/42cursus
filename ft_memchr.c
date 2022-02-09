/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:09:54 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:09:54 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (str);
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// char	*str = NULL;
// 	char	*p = NULL;
// 	char	*q = NULL;
// 	char	*r = NULL;
// 	char	*s = NULL;
// 	// int c;

// 	// c = 'd';
// 	char *src = "/|\x12\xff\x09\x42\2002\42|\\";
// 	int size = 10;
// 	p = memchr(src, '\200', size);
// 	q = ft_memchr(src, '\200', size);
// 	r = strchr(src, '\200');
// 	s = ft_strchr(src, '\200');
// 	printf("p: %s\n", p);
// 	printf("q: %s\n", q);
// 	printf("q: %s\n", r);
// 	printf("q: %s\n", s);
// 	return 0;
// }

// #include <string.h>
// #include <stdio.h>

// static void	memchr_len_0_case1(char *s1, char s2);

// static void	memchr_len_0_case2(char *s1, char s2);

// static void	memchr_len_0_casenull(char *s1, char s2);

// static void	memchr_normal_case(char *s1, char s2);

// static void	including_null_case1(char *s1, char s2);

// static void	including_null_case2(char *s1, char s2);

// int main(void)
// {
// 	char	len_0_case1[] = "";
// 	char	len_0_case2[] = "abc";

// 	char	*null1 = NULL;
// 	char	*null2 = NULL;

// 	char	normal_case[] = "abcda";
// 	char	normal_case2[] = "abcd";

// 	char	including_null1[] = "\0a\0b\0c1";
// 	char	including_null2[] = "\0a\0b\0c1";

// 	char	including_null3[] = "abc\0d\0e1";
// 	char	including_null4[9] = "abc\0d";

// 	memchr_len_0_case1(len_0_case1, len_0_case2);
// 	memchr_len_0_case2(len_0_case2, len_0_case1);
// 	memchr_len_0_casenull(null1, null2);
// 	memchr_normal_case(normal_case, normal_case2);
// 	including_null_case1(including_null1, including_null2);
// 	including_null_case2(including_null3, including_null4);
// 	printf("/////Below case results segmentation fault/////\n");
// 	printf("len != 0 && (s1 == NULL || s2 == NULL)\n");
// 	// ft_memchr(null1, null2, 1);
// 	// memchr(null1, null2, 1);
// 	return(0);
// }

// void	memchr_len_0_case1(char *s1, char s2)
// {
// 	int		ori_ret = 0;
// 	int		ft_ret = 0;
// 	int		i = 0;

// 	printf("\n/////len_0_case1/////\n");
// 	printf("\"\": %s→%dbyte cmp\n\n", s2, i);
// 	ft_ret = ft_memchr(s1, s2, i);
// 	ori_ret = memchr(s1, s2, i);
// 	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
// 	if (ft_ret == ori_ret)
// 		printf("\nOK :)\n");
// 	else
// 		printf("\nNG :(\n");
// }

// void	memchr_len_0_case2(char *s1, char s2)
// {
// 	int		ori_ret = 0;
// 	int		ft_ret = 0;
// 	int		i = 0;

// 	printf("\n/////len_0_case2/////\n");
// 	printf("%s: \"\"→%dbyte cmp\n\n", s1, i);
// 	ft_ret = ft_memchr(s1, s2, i);
// 	ori_ret = memchr(s1, s2, i);
// 	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
// 	if (ft_ret == ori_ret)
// 		printf("\nOK :)\n");
// 	else
// 		printf("\nNG :(\n");
// }

// void	memchr_len_0_casenull(char *s1, char s2)
// {
// 	int		ori_ret = 0;
// 	int		ft_ret = 0;
// 	int		i = 0;

// 	printf("\n/////len_0_casenull/////\n");
// 	printf("%s: %s→%dbyte cmp\n\n", s1, s2, i);
// 	ft_ret = ft_memchr(s1, s2, i);
// 	ori_ret = memchr(s1, s2, i);
// 	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
// 	if (ft_ret == ori_ret)
// 		printf("\nOK :)\n");
// 	else
// 		printf("\nNG :(\n");
// }

// void	memchr_normal_case(char *s1, char s2)
// {

// 	int		ori_ret = 0;
// 	int		ft_ret = 0;
// 	int		i = 5;
// 	int		j = 0;
// 	int		k = 0;
// 	int		_ = 0;

// 	printf("\n/////normal_case/////\n");
// 	printf("%s: %s→%dbyte cmp\n\n", s1, s2, i);
// 	printf("Index:\t");
// 	for (_ = 0; _ < i; _++)
// 		printf("%d\t", _);
// 	printf("\n%s:\t", s1);
// 	while (j < i)
// 	{
// 		printf("[%d]\t", s1[j]);
// 		j++;
// 	}
// 	printf("\n%s:\t", s2);
// 	for (k = 0; k < i; k++)
// 		printf("[%d]\t", s2[k]);
// 	ft_ret = ft_memchr(s1, s2, i);
// 	ori_ret = memchr(s1, s2, i);
// 	printf("\n\nori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
// 	if (ft_ret == ori_ret)
// 		printf("\nOK :)\n");
// 	else
// 		printf("\nNG :(\n");
// }

// void	including_null_case1(char *s1, char s2)
// {

// 	int		ori_ret = 0;
// 	int		ft_ret = 0;
// 	int		i = 8;
// 	int		j = 0;
// 	int		k = 0;
// 	int		_ = 0;

// 	printf("\n/////including_null_case1/////\n");
// 	printf("\\0a\\0b\\0c1: \\0a\\0b\\0c1→%dbyte cmp\n\n", i);
// 	printf("Index:\t\t");
// 	for (_ = 0; _ < i; _++)
// 		printf("%d\t", _);
// 	printf("\n\\0a\\0b\\0c1:\t");
// 	while (j < i)
// 	{
// 		printf("[%d]\t", s1[j]);
// 		j++;
// 	}
// 	printf("\n\\0a\\0b\\0c1:\t");
// 	for (k = 0; k < i; k++)
// 		printf("[%d]\t", s2[k]);
// 	ft_ret = ft_memchr(s1, s2, i);
// 	ori_ret = memchr(s1, s2, i);
// 	printf("\n\nori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
// 	if (ft_ret == ori_ret)
// 		printf("\nOK :)\n");
// 	else
// 		printf("\nNG :(\n");
// }

// void	including_null_case2(char *s1, char s2)
// {

// 	int		ori_ret = 0;
// 	int		ft_ret = 0;
// 	int		i = 9;
// 	int		j = 0;
// 	int		k = 0;
// 	int		_ = 0;

// 	printf("\n/////including_null_case2/////\n");
// 	printf("\\0a\\0b\\0c1: \\0a\\0b\\0c1→%dbyte cmp\n\n", i);
// 	printf("Index:\t\t");
// 	for (_ = 0; _ < i; _++)
// 		printf("%d\t", _);
// 	printf("\nabc\\0d\\0e1:\t");
// 	while (j < i)
// 	{
// 		printf("[%d]\t", s1[j]);
// 		j++;
// 	}
// 	printf("\nabc\\0d:\t\t");
// 	for (k = 0; k < i; k++)
// 		printf("[%d]\t", s2[k]);
// 	ft_ret = ft_memchr(s1, s2, i);
// 	ori_ret = memchr(s1, s2, i);
// 	printf("\n\nori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
// 	if (ft_ret == ori_ret)
// 		printf("\nOK :)\n");
// 	else
// 		printf("\nNG :(\n");
// }
