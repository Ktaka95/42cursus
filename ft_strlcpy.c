/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:25:57 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 16:25:58 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dstsize > dstの場合、常にoverflowするため、コンパイル不可
// dstsize < 0のとき、strlcpyはセグフォ、ft_は実行可。
// →dstsizeはsize_t(unsigned long)なのでdstsize<0は考慮する必要無し?
// dst == NULL && src == NULL → セグフォ
// dst == NULL && dstsize > 1 → セグフォ
// src == NULL → セグフォ
// dstの途中にヌル文字が含まれていても、コピーを続ける

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		ret;

	i = 0;
	ret = ft_strlen(src);
	if ((dst == NULL && dstsize == 0)
		|| (dst != NULL && src != NULL && dstsize == 0))
		return (ret);
	else if (dst != NULL && src != NULL && dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ret);
}


// #include <stdio.h>
// #include <string.h>

// void	test1_normal_case(void);
// void	test2_dstsize_lt_src_case(void);
// void	test3_dst_include_0_case(void);
// void	test4_src_include_0_case(void);
// void	test5_dst_null_dstsize_0_case(void);
// void	test6_dstsize_0_case(void);
// void	test7_dstsize_lt_0_case(void);

// int	main(void)
// {
// 	test1_normal_case();
// 	test2_dstsize_lt_src_case();
// 	test3_dst_include_0_case();
// 	test4_src_include_0_case();
// 	test5_dst_null_dstsize_0_case();
// 	test6_dstsize_0_case();
// 	test7_dstsize_lt_0_case();
// 	return (0);
// }

// void	test1_normal_case(void)
// {
// 	char	ori_dst[30] = "override me";
// 	char	ft_dst[30] = "override me";
// 	char	*src = "Hello, 42 world!";
// 	size_t	dstsize = strlen(src) + 1;

// 	printf("///test1_normal_case///\n");
// 	printf("--before strlcpy--\n");
// 	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
// 	if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
// 	{
// 		printf("--after strlcpy--\n");
// 		printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
// 		printf("OK :)\n");
// 	}
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test2_dstsize_lt_src_case(void)
// {
// 	char	ori_dst[30] = "override me";
// 	char	ft_dst[30] = "override me";
// 	char	*src = "Hello, 42 world!";
// 	size_t	dstsize = 9;

// 	printf("\n///test2_dstsize_lt_src_case///\n");
// 	printf("--before strlcpy--\n");
// 	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
// 	if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
// 	{
// 		printf("--after strlcpy--\n");
// 		printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
// 		printf("OK :)\n");
// 	}
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test3_dst_include_0_case(void)
// {
// 	char	ori_dst[30] = "override \0 me";
// 	char	ft_dst[30] = "override \0 me";
// 	char	*src = "Hello, 42 world!";
// 	size_t	dstsize = strlen(src) + 1;

// 	printf("\n///test3_dst_include_0_case///\n");
// 	printf("--before strlcpy--\n");
// 	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
// 	if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
// 	{
// 		printf("--after strlcpy--\n");
// 		printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
// 		printf("OK :)\n");
// 	}
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test4_src_include_0_case(void)
// {
// 	char	ori_dst[30] = "override me";
// 	char	ft_dst[30] = "override me";
// 	char	*src = "Hello, 42 \0 world!";
// 	size_t	dstsize = strlen(src);

// 	printf("\n///test4_src_include_0_case///\n");
// 	printf("--before strlcpy--\n");
// 	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
// 	if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
// 	{
// 		printf("--after strlcpy--\n");
// 		printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
// 		printf("OK :)\n");
// 	}
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test5_dst_null_dstsize_0_case(void)
// {
// 	char	*ori_dst = NULL;
// 	char	*ft_dst = NULL;
// 	char	*src = "Hello, 42 world!";
// 	size_t	dstsize = 0;

// 	printf("\n///test5_dst_null_dstsize_0_case///\n");
// 	printf("--before strlcpy--\n");
// 	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
// 	if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
// 	{
// 		printf("--after strlcpy--\n");
// 		printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
// 		printf("OK :)\n");
// 	}
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test6_dstsize_0_case(void)
// {
// 	char	ori_dst[30] = "override me";
// 	char	ft_dst[30] = "override me";
// 	char	*src = "Hello, 42 world!";
// 	size_t	dstsize = 0;

// 	printf("\n///test6_dstsize_0_case///\n");
// 	printf("--before strlcpy--\n");
// 	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
// 	if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
// 	{
// 		printf("--after strlcpy--\n");
// 		printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
// 		printf("OK :)\n");
// 	}
// 	else
// 	{
// 		printf("NG :(\n");
// 		exit (0);
// 	}
// 	return ;
// }

// void	test7_dstsize_lt_0_case(void)
// {
// 	char	ori_dst[30] = "override me";
// 	char	ft_dst[30] = "override me";
// 	char	*src = "Hello, 42 world!";
// 	size_t	dstsize = -10;

// 	printf("\n///test7_dstsize_lt_0_case///\n");
// 	printf("--before strlcpy--\n");
// 	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
// 	ft_strlcpy(ft_dst, src, dstsize);
// 	printf("%s\n", ft_dst);
// 	// if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
// 	// {
// 	// 	printf("--after strlcpy--\n");
// 	// 	printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
// 	// 	printf("OK :)\n");
// 	// }
// 	// else
// 	// {
// 	// 	printf("NG :(\n");
// 	// 	exit (0);
// 	// }
// 	return ;
// }


// // #include <stdio.h>
// // #include <string.h>

// // int main(void)
// // {
// // 	int i = 0;
// // 	int j = 0;
// // 	int ret = 0;
// // 	char *dst_null = NULL;
// // 	char *src_null = NULL;
// // 	char *dst_null2 = NULL;
// // 	char *dst_null3 = NULL;
// // 	char *dst_null4 = NULL;
// // 	char src_abcde[] = "ABCDE";
// // 	char dst_abcde[] = "abcdefgh";
// // 	char dst_abcde2[] = "abcdefgh";
// // 	char dst_abcde3[] = "abcdefgh";
// // 	char dst_abcde4[] = "abcdefgh";
// // 	char dst_abcde6[] = "ab\0cdef\0gh";
// // 	char dst_abcde7[] = "abcdefgh";
// // 	char src_abcde2[] = "AB\0CD\0E";

// // 	ret = ft_strlcpy(dst_null3,src_abcde,0);
// // 	printf("1.NULLに%sを0バイトコピー\nコピー後の文字列→%s\n",src_abcde, dst_null3);
// // 	printf("戻り値→%d\n\n", ret);
// // 	printf("2.%sに%sを0バイトコピー\n",dst_abcde3, src_abcde);
// // 	ret = ft_strlcpy(dst_abcde3,src_abcde,0);
// // 	printf("コピー後の文字列→%s\n",dst_abcde3);
// // 	printf("戻り値→%d\n\n", ret);

// // 	printf("3.%sに%sを5バイトコピー\n",dst_abcde4, src_abcde);
// // 	ret = ft_strlcpy(dst_abcde4,src_abcde,5);
// // 	printf("コピー後の文字列→%s\n",dst_abcde4);
// // 	printf("戻り値→%d\n\n", ret);

// // 	printf("4.");
// // 	while (i < 10)
// // 	{
// // 		printf("[%c]", dst_abcde6[i]);
// // 		i++;
// // 	}
// // 	printf("にABCDEを5バイトコピー\nコピー後の文字列→\n");
// // 	i = 0;
// // 	ret = ft_strlcpy(dst_abcde6,src_abcde,5);
// // 	while (i < 10)
// // 	{
// // 		printf("[%c]", dst_abcde6[i]);
// // 		i++;
// // 	}
// // 	printf("\n戻り値→%d\n\n", ret);

// // 	printf("5.");
// // 	while (j < 10)
// // 	{
// // 		printf("[%c]", dst_abcde7[j]);
// // 		j++;
// // 	}
// // 	printf("にAB0CD0Eを5バイトコピー\nコピー後の文字列→\n");
// // 	j = 0;
// // 	ret = ft_strlcpy(dst_abcde7,src_abcde2,5);
// // 	while (j < 10)
// // 	{
// // 		printf("[%c]", dst_abcde7[j]);
// // 		j++;
// // 	}
// // 	printf("\n戻り値→%d\n\n", ret);

// // 	printf("/////////以下セグフォ/////////\n");

// // 	ret = strlcpy(dst_null,src_null,0);
// // 	printf("NULLにNULLを0バイトコピー\nコピー後の文字列→%s\n",dst_null);
// // 	printf("戻り値→%d\n\n", ret);
// // 	ret = strlcpy(dst_null2,src_null,5);
// // 	printf("NULLにNULLを5バイトコピー\nコピー後の文字列→%s\n",dst_null2);
// // 	printf("戻り値→%d\n\n", ret);
// // 	ret = strlcpy(dst_abcde,src_null,5);
// // 	printf("abcdeにNULLを0バイトコピー\nコピー後の文字列→%s\n",dst_abcde);
// // 	printf("戻り値→%d\n\n", ret);
// // 	ret = strlcpy(dst_null4,src_abcde,5);
// // 	printf("6.dstnullにABCDEを5バイトコピー\nコピー後の文字列→%s\n\n",dst_null4);
// // 	ret = strlcpy(dst_abcde2,src_null,5);
// // 	printf("7.abcdeにNULLを5バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde2);
// // 	return 0;
// // }
