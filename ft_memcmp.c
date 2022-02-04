/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:10:02 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:10:03 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				ret;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	ret = 0;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
		{
			ret = str1[i] - str2[i];
			break ;
		}
	}
	return (ret);
}

/*
#include <string.h>
#include <stdio.h>

static void	memcmp_len_0_case1(char *s1, char *s2);

static void	memcmp_len_0_case2(char *s1, char *s2);

static void	memcmp_len_0_casenull(char *s1, char *s2);

static void	memcmp_normal_case(char *s1, char *s2);

static void	including_null_case1(char *s1, char *s2);

static void	including_null_case2(char *s1, char *s2);

int main(void)
{
	char	len_0_case1[] = "";
	char	len_0_case2[] = "abc";

	char	*null1 = NULL;
	char	*null2 = NULL;

	char	normal_case[] = "abcda";
	char	normal_case2[] = "abcd";

	char	including_null1[] = "\0a\0b\0c1";
	char	including_null2[] = "\0a\0b\0c1";

	char	including_null3[] = "abc\0d\0e1";
	char	including_null4[9] = "abc\0d";

	memcmp_len_0_case1(len_0_case1, len_0_case2);
	memcmp_len_0_case2(len_0_case2, len_0_case1);
	memcmp_len_0_casenull(null1, null2);
	memcmp_normal_case(normal_case, normal_case2);
	including_null_case1(including_null1, including_null2);
	including_null_case2(including_null3, including_null4);
	printf("/////以下セグフォ/////\n");
	printf("len != 0 && (s1 == NULL || s2 == NULL)\n");
	// ft_memcmp(null1, null2, 1);
	// memcmp(null1, null2, 1);
	return(0);
}

void	memcmp_len_0_case1(char *s1, char *s2)
{
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 0;

	printf("\n/////len_0_case1/////\n");
	printf("\"\": %s→%d文字比較\n\n", s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("\nOK :)\n");
	else
		printf("\nNG :(\n");
}

void	memcmp_len_0_case2(char *s1, char *s2)
{
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 0;

	printf("\n/////len_0_case2/////\n");
	printf("%s: \"\"→%d文字比較\n\n", s1, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("\nOK :)\n");
	else
		printf("\nNG :(\n");
}

void	memcmp_len_0_casenull(char *s1, char *s2)
{
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 0;

	printf("\n/////len_0_casenull/////\n");
	printf("%s: %s→%d文字比較\n\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("\nOK :)\n");
	else
		printf("\nNG :(\n");
}

void	memcmp_normal_case(char *s1, char *s2)
{

	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 5;
	int		j = 0;
	int		k = 0;
	int		_ = 0;

	printf("\n/////normal_case/////\n");
	printf("%s: %s→%d文字比較\n\n", s1, s2, i);
	printf("Index:\t");
	for (_ = 0; _ < i; _++)
		printf("%d\t", _);
	printf("\n%s:\t", s1);
	while (j < i)
	{
		printf("[%d]\t", s1[j]);
		j++;
	}
	printf("\n%s:\t", s2);
	for (k = 0; k < i; k++)
		printf("[%d]\t", s2[k]);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("\n\nori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("\nOK :)\n");
	else
		printf("\nNG :(\n");
}

void	including_null_case1(char *s1, char *s2)
{

	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 8;
	int		j = 0;
	int		k = 0;
	int		_ = 0;

	printf("\n/////including_null_case1/////\n");
	printf("\\0a\\0b\\0c1: \\0a\\0b\\0c1→%d文字比較\n\n", i);
	printf("Index:\t\t");
	for (_ = 0; _ < i; _++)
		printf("%d\t", _);
	printf("\n\\0a\\0b\\0c1:\t");
	while (j < i)
	{
		printf("[%d]\t", s1[j]);
		j++;
	}
	printf("\n\\0a\\0b\\0c1:\t");
	for (k = 0; k < i; k++)
		printf("[%d]\t", s2[k]);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("\n\nori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("\nOK :)\n");
	else
		printf("\nNG :(\n");
}

void	including_null_case2(char *s1, char *s2)
{

	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 9;
	int		j = 0;
	int		k = 0;
	int		_ = 0;

	printf("\n/////including_null_case2/////\n");
	printf("\\0a\\0b\\0c1: \\0a\\0b\\0c1→%d文字比較\n\n", i);
	printf("Index:\t\t");
	for (_ = 0; _ < i; _++)
		printf("%d\t", _);
	printf("\nabc\\0d\\0e1:\t");
	while (j < i)
	{
		printf("[%d]\t", s1[j]);
		j++;
	}
	printf("\nabc\\0d:\t\t");
	for (k = 0; k < i; k++)
		printf("[%d]\t", s2[k]);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("\n\nori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("\nOK :)\n");
	else
		printf("\nNG :(\n");
}
*/
