/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:14:38 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/10 21:14:39 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	else if (n == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void	test1_normal_case(void);
// void	test2_dstnull_srcnull_size0_case(void);
// void	test3_dstnull_srcnull_sizenot0_case(void);
// void	test4_dstnull_size0_case(void);
// void	test5_srcnull_size0_case(void);
// void	test7_dst_include_0_case(void);
// void	test8_src_include_0_case(void);
// void	test9_dst_overlap_case(void);
// // void	test10_segv_case(void);

// int main(void)
// {
// 	test1_normal_case();
// 	test2_dstnull_srcnull_size0_case();
// 	test3_dstnull_srcnull_sizenot0_case();
// 	test4_dstnull_size0_case();
// 	test5_srcnull_size0_case();
// 	test7_dst_include_0_case();
// 	test8_src_include_0_case();
// 	test9_dst_overlap_case();
// 	// test10_segv_case();
// 	// int i = 0;
// 	// int j = 0;
// 	// int k = 0;
// 	// char *dst_null = NULL;
// 	// char *src_null = NULL;
// 	// char *dst_null2 = NULL;
// 	// char *dst_null3 = NULL;
// 	// char dst_size3[6] = "abc\0d";
// 	// char dst_size4[10] = "abc\0d\0efg";
// 	// // char *dst_null4 = NULL;
// 	// char src_abcde[] = "AB\0CDE\0";
// 	// char dst_abcde[] = "abcdefgh";
// 	// char dst_abcde2[] = "abcdefgh";
// 	// // char dst_abcde3[] = "abcdefgh";
// 	// // char dst_abcde4[] = "abcdefgh";
// 	// // char dst_abcde6[] = "abc\0def\0gh";
// 	// // char dst_abcde7[] = "abcdefgh";
// 	// // char src_abcde2[] = "AB\0CD\0E";
// 	// // char dst_abcde5[] = "abcde";







// 	// printf("\n------------\n");
// 	// char src[] = "test basic";
// 	// char dst[22];
// 	// while (k < 22)
// 	// {
// 	// 	if (dst[k] == '\0')
// 	// 		printf("%d: ['\\0']\n", k);
// 	// 	else
// 	// 		printf("%d: [%c]\n", k, dst[k]);
// 	// 	k++;
// 	// }
// 	// k = 0;
// 	// while (k < 22)
// 	// {
// 	// 	if (src[k] == '\0')
// 	// 		printf("%d: ['\\0']\n", k);
// 	// 	else
// 	// 		printf("%d: [%c]\n", k, src[k]);
// 	// 	k++;
// 	// }
// 	// ft_memcpy(dst, src, 22);
// 	// k = 0;
// 	// while (k < 22)
// 	// {
// 	// 	if (dst[k] == '\0')
// 	// 		printf("%d: ['\\0']\n", k);
// 	// 	else
// 	// 		printf("%d: [%c]\n", k, dst[k]);
// 	// 	k++;
// 	// }
// 	// printf("done\n");
// 	// // memcpy(dst_null2,src_null,5);
// 	// // printf("dstnullにsrcnullを5バイトコピー\nコピー後の文字列→%s\n\n",dst_null2);
// 	// // memcpy(dst_null3,src_abcde,0);
// 	// // printf("dstnullにABCDEを0バイトコピー\nコピー後の文字列→%s\n\n",dst_null3);
// 	// // memcpy(dst_abcde,src_null,0);
// 	// // printf("abcdeにNULLを0バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde);
// 	// // memcpy(dst_abcde3,src_abcde,0);
// 	// // printf("abcdeにABCDEを0バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde3);
// 	// // memcpy(dst_abcde4,src_abcde,5);
// 	// // printf("abcdeにABCDEを5バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde4);
// 	// // memcpy(dst_abcde6,src_abcde,5);
// 	// // printf("abc0def0ghにABCDEを5バイトコピー\nコピー後の文字列→");
// 	// // while (i < 10)
// 	// // {
// 	// // 	printf("[%c]", dst_abcde6[i]);
// 	// // 	i++;
// 	// // }
// 	// // printf("\n\n");
// 	// // memcpy(dst_abcde7,src_abcde2,5);
// 	// // printf("abcdefghにAB0CD0Eを5バイトコピー\nコピー後の文字列→");
// 	// // while (j < 8)
// 	// // {
// 	// // 	printf("[%c]", dst_abcde7[j]);
// 	// // 	j++;
// 	// // }
// 	// // printf("\n\n");
// 	// // printf("/////////以下セグフォ/////////\n");
// 	// // memcpy(dst_null4,src_abcde,5);
// 	// // printf("dstnullにABCDEを5バイトコピー\nコピー後の文字列→%s\n\n",dst_null4);
// 	// // memcpy(dst_abcde2,src_null,5);
// 	// // printf("abcdeにNULLを5バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde2);
// 	// // memcpy(dst_abcde5,src_abcde,10);
// 	// // printf("abcdeにABCDEを10バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde5);
// 	// // 常にoverflowするため、コンパイル不可
// 	return 0;
// }


// void	test1_normal_case(void)
// {
// 	char	ori_dst[] = "abcdefgh";
// 	char	ft_dst[] = "abcdefgh";
// 	char	src[] = "ABCDEFG";
// 	size_t	size = 3;

// 	printf("///test1_normal_case///\ndst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
// 	printf("before memcpy: dst =>\t%s\n", ori_dst);
// 	memcpy(ori_dst, src, size);
// 	ft_memcpy(ft_dst, src, size);
// 	if (strcmp(ori_dst, ft_dst) == 0)
// 		printf("after ori_memcpy =>\t%s\nafter ft_memcpy =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test2_dstnull_srcnull_size0_case(void)
// {
// 	char	*ori_dst = NULL;
// 	char	*ft_dst = NULL;
// 	char	*src = NULL;
// 	size_t	size = 0;

// 	printf("///test2_dstnull_srcnull_size0_case///\ndst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
// 	printf("before memcpy: dst =>\t%s\n", ori_dst);
// 	memcpy(ori_dst, src, size);
// 	ft_memcpy(ft_dst, src, size);
// 	if (ori_dst == NULL && ft_dst == NULL)
// 		printf("after ori_memcpy =>\t%s\nafter ft_memcpy =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test3_dstnull_srcnull_sizenot0_case(void)
// {
// 	char	*ori_dst = NULL;
// 	char	*ft_dst = NULL;
// 	char	*src = NULL;
// 	size_t	size = 5;

// 	printf("///test3_dstnull_srcnull_sizenot0_case///\ndst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
// 	printf("before memcpy: dst =>\t%s\n", ori_dst);
// 	memcpy(ori_dst, src, size);
// 	ft_memcpy(ft_dst, src, size);
// 	if (ori_dst == NULL && ft_dst == NULL)
// 		printf("after ori_memcpy =>\t%s\nafter ft_memcpy =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test4_dstnull_size0_case(void)
// {
// 	char	*ori_dst = NULL;
// 	char	*ft_dst = NULL;
// 	char	src[] = "ABCDEFG";
// 	size_t	size = 0;

// 	printf("///test4_dstnull_size0_case///\ndst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
// 	printf("before memcpy: dst =>\t%s\n", ori_dst);
// 	memcpy(ori_dst, src, size);
// 	ft_memcpy(ft_dst, src, size);
// 	if (ori_dst == NULL && ft_dst == NULL)
// 		printf("after ori_memcpy =>\t%s\nafter ft_memcpy =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test5_srcnull_size0_case(void)
// {
// 	char	ori_dst[] = "abcdefgh";
// 	char	ft_dst[] = "abcdefgh";
// 	char	*src = NULL;
// 	size_t	size = 0;

// 	printf("///test5_srcnull_size0_case///\ndst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
// 	printf("before memcpy: dst =>\t%s\n", ori_dst);
// 	memcpy(ori_dst, src, size);
// 	ft_memcpy(ft_dst, src, size);
// 	if (strcmp(ori_dst, ft_dst) == 0)
// 		printf("after ori_memcpy =>\t%s\nafter ft_memcpy =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test7_dst_include_0_case(void)
// {
// 	char	ori_dst[] = "abc\0d";
// 	char	ft_dst[] = "abc\0d";
// 	char	*src = "ABCDEFG";
// 	size_t	size = 5;

// 	printf("///test7_dst_include_0_case///\ndst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
// 	printf("before memcpy: dst =>\t%s\n", ori_dst);
// 	memcpy(ori_dst, src, size);
// 	ft_memcpy(ft_dst, src, size);
// 	if (memcmp(ori_dst, ft_dst, 5) == 0)
// 		printf("after ori_memcpy =>\t%s\nafter ft_memcpy =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test8_src_include_0_case(void)
// {
// 	char	ori_dst[] = "abcdefgh";
// 	char	ft_dst[] = "abcdefgh";
// 	char	*src = "ABC\0DEFG";
// 	size_t	size = 5;

// 	printf("///test8_src_include_0_case///\ndst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
// 	printf("before memcpy: dst =>\t%s\n", ori_dst);
// 	memcpy(ori_dst, src, size);
// 	ft_memcpy(ft_dst, src, size);
// 	if (memcmp(ori_dst, ft_dst, 5) == 0)
// 		printf("after ori_memcpy =>\t%s\nafter ft_memcpy =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test9_dst_overlap_case(void)
// {
// 	char	ori_dst[] = "abcdefgh";
// 	char	ft_dst[] = "abcdefgh";
// 	char	memmove_dst[] = "abcdefgh";
// 	char	*ori_src;
// 	char	*ft_src;
// 	char	*memmove_src;
// 	ori_src = &ori_dst[3];
// 	ft_src = &ft_dst[3];
// 	memmove_src = &memmove_dst[3];
// 	size_t	size = 5;

// 	printf("///test9_dst_overlap_case///\ndst: %s\nsrc: %s\nsize: %zu\n", ori_dst, ori_src, size);
// 	printf("before memcpy: dst =>\t%s\n", ori_dst);
// 	memcpy(ori_dst, ori_src, size);
// 	ft_memcpy(ft_dst, ft_src, size);

// 	printf("after ori_memcpy =>\t%s\nafter ft_memcpy =>\t%s\n",ori_dst, ft_dst);
// 	printf("%s\n", memmove(memmove_dst, memmove_src, size));
// 	return ;
// }

// // void	test10_segv_case(void)
// // {

// // }
