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

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	i = 0;
	ret = ft_strlen(src);
	if (dstsize == 0)
		return (ret);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ret);
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_dstsize_lt_len_case(void);
void	test3_dst_include_0_case(void);
void	test4_src_include_0_case(void);
void	test5_dst_null_dstsize_0_case(void);
void	test6_dstsize_0_case(void);
void	test7_src_null_case(void);
void	test8_dst_null_dstsize_not_0_case(void);
void	test9_not_null_end_case(void);
void	test10_dst_overlap_src_case(void);
void	test11_dst_overlap_src_case2(void);

int	main(void)
{
	test1_normal_case();
	test2_dstsize_lt_len_case();
	test3_dst_include_0_case();
	test4_src_include_0_case();
	test5_dst_null_dstsize_0_case();
	test6_dstsize_0_case();
	test7_src_null_case();
	test8_dst_null_dstsize_not_0_case();
	test9_not_null_end_case();
	test10_dst_overlap_src_case();
	test11_dst_overlap_src_case2();
	return (0);
}

void	test1_normal_case(void)
{
	char	ori_dst[30] = "Hello, \0";
	char	ft_dst[30] = "Hello, \0";
	char	*src = "42 world!";
	size_t	dstsize = strlen(src) + 1;
	size_t	ori_ret;
	size_t	ft_ret;

	printf("///test1_normal_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	ori_ret = strlcpy(ori_dst, src, dstsize);
	ft_ret = ft_strlcpy(ft_dst, src, dstsize);
	if (ori_ret == ft_ret)
	{
		printf("--after strlcpy--\n");
		printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_dstsize_lt_len_case(void)
{
	char	ori_dst[30] = "Hello, \0";
	char	ft_dst[30] = "Hello, \0";
	char	*src = "42 world!";
	size_t	dstsize = strlen(src) - 1;
	size_t	ori_ret;
	size_t	ft_ret;

	printf("\n///test2_dstsize_lt_len_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	ori_ret = strlcpy(ori_dst, src, dstsize);
	ft_ret = ft_strlcpy(ft_dst, src, dstsize);
	if (ori_ret == ft_ret)
	{
		printf("--after strlcpy--\n");
		printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_dst_include_0_case(void)
{
	char	ori_dst[30] = "Hello, \0 42 world!";
	char	ft_dst[30] = "Hello, \0 42 world!";
	char	*src = "42 world!";
	size_t	dstsize = strlen(src) + 1;
	size_t	ori_ret;
	size_t	ft_ret;

	printf("\n///test3_dst_include_0_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	ori_ret = strlcpy(ori_dst, src, dstsize);
	ft_ret = ft_strlcpy(ft_dst, src, dstsize);
	if (ori_ret == ft_ret)
	{
		printf("--after strlcpy--\n");
		printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_src_include_0_case(void)
{
	char	ori_dst[30] = "Hello, \0";
	char	ft_dst[30] = "Hello, \0";
	char	*src = "42 \0 world!";
	size_t	dstsize = strlen(src) + 1;
	size_t	ori_ret;
	size_t	ft_ret;

	printf("\n///test4_src_include_0_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	ori_ret = strlcpy(ori_dst, src, dstsize);
	ft_ret = ft_strlcpy(ft_dst, src, dstsize);
	if (ori_ret == ft_ret)
	{
		printf("--after strlcpy--\n");
		printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test5_dst_null_dstsize_0_case(void)
{
	char	*ori_dst = NULL;
	char	*ft_dst = NULL;
	char	*src = "Hello, 42 world!";
	size_t	dstsize = 0;
	size_t	ori_ret;
	size_t	ft_ret;

	printf("\n///test5_dst_null_dstsize_0_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	ori_ret = strlcpy(ori_dst, src, dstsize);
	ft_ret = ft_strlcpy(ft_dst, src, dstsize);
	if (ori_ret == ft_ret)
	{
		printf("--after strlcpy--\n");
		printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test6_dstsize_0_case(void)
{
	char	ori_dst[30] = "Hello, \0";
	char	ft_dst[30] = "Hello, \0";
	char	*src = "42 world!";
	size_t	dstsize = 0;
	size_t	ori_ret;
	size_t	ft_ret;

	printf("\n///test6_dstsize_0_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	ori_ret = strlcpy(ori_dst, src, dstsize);
	ft_ret = ft_strlcpy(ft_dst, src, dstsize);
	if (ori_ret == ft_ret)
	{
		printf("--after strlcpy--\n");
		printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test7_src_null_case(void)
{
	char	ori_dst[30] = "Hello, 42 world!\0";
	// char	ft_dst[30] = "Hello, 42 world!";
	char	*src = NULL;
	size_t	dstsize = 0;
	printf("\n///test7_src_null_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	printf("src null is SEGV\n");
	// strlcpy(ori_dst, src, dstsize);
	// ft_strlcpy(ft_dst, src, dstsize);
	// if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
	// {
	// 	printf("--after strlcpy--\n");
	// 	printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
	// 	printf("OK :)\n");
	// }
	// else
	// {
	// 	printf("NG :(\n");
	// 	exit (0);
	// }
	return ;
}

void	test8_dst_null_dstsize_not_0_case(void)
{
	char	*ori_dst = NULL;
	// char	*ft_dst = NULL;
	char	*src = "Hello, 42 world!";
	size_t	dstsize = 1;
	printf("\n///test8_dst_null_dstsize_not_0_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	printf("dst null && dstsize not 0 is SEGV\n");
	// strlcpy(ori_dst, src, dstsize);
	// ft_strlcpy(ft_dst, src, dstsize);
	// if (strlcpy(ori_dst, src, dstsize) == ft_strlcpy(ft_dst, src, dstsize))
	// {
	// 	printf("--after strlcpy--\n");
	// 	printf("ret: %zu\ndst: %s\n", strlcpy(ori_dst, src, dstsize), ori_dst);
	// 	printf("OK :)\n");
	// }
	// else
	// {
	// 	printf("NG :(\n");
	// 	exit (0);
	// }
	return ;
}

void	test9_not_null_end_case(void)
{
	char	ori_dst[30] = "Hello, \0";
	char	ft_dst[30] = "Hello, \0";
	char	*src = "42 world!";
	size_t	dstsize = strlen(src);
	size_t	ori_ret;
	size_t	ft_ret;

	printf("\n///test9_not_null_end_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	ori_ret = strlcpy(ori_dst, src, dstsize);
	ft_ret = ft_strlcpy(ft_dst, src, dstsize);
	if (ori_ret == ft_ret)
	{
		printf("--after strlcpy--\n");
		printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test10_dst_overlap_src_case(void)
{
	char	ori_dst[30] = "Hello, 42 world!\0";
	// char	ft_dst[30] = "Hello, 42 world!\0";
	char	*ori_src;
	// char	*ft_src;
	size_t	dstsize = strlen(ori_dst) * 2;
	// size_t	ori_ret;
	// size_t	ft_ret;

	ori_src = &ori_dst[7];
	// ft_src = &ft_dst[7];
	printf("\n///test10_dst_overlap_src_case///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, ori_src, dstsize);
	printf("dst src overlap is abort\n");
	// ori_ret = strlcpy(ori_dst, ori_src, dstsize);
	// ft_ret = ft_strlcpy(ft_dst, ft_src, dstsize);
	// printf("%zu\n, %s\n", ft_ret, ft_dst);
	// if (ori_ret == ft_ret)
	// {
	// 	printf("--after strlcpy--\n");
	// 	printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
	// 	printf("OK :)\n");
	// }
	// else
	// {
	// 	printf("NG :(\n");
	// 	exit (0);
	// }
	return ;
}

void	test11_dst_overlap_src_case2(void)
{
	char	ori_src[30] = "Hello, 42 world!\0";
	// char	ft_src[30] = "Hello, 42 world!\0";
	char	*ori_dst = &ori_src[7];
	// char	*ft_dst = &ft_src[7];
	size_t	dstsize = strlen(ori_src) * 2;
	// size_t	ori_ret;
	// size_t	ft_ret;

	printf("\n///test11_dst_overlap_src_case2///\n");
	printf("--before strlcpy--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, ori_src, dstsize);
	printf("dst src overlap is abort\n");
	// ori_ret = strlcpy(ori_dst, ori_src, dstsize);
	// ft_ret = ft_strlcpy(ft_dst, ft_src, dstsize);
	// printf("%zu\n, %s\n", ft_ret, ft_dst);
	// if (ori_ret == ft_ret)
	// {
	// 	printf("--after strlcpy--\n");
	// 	printf("ret: %zu\ndst: %s\n", ori_ret, ori_dst);
	// 	printf("OK :)\n");
	// }
	// else
	// {
	// 	printf("NG :(\n");
	// 	exit (0);
	// }
	return ;
}
*/
