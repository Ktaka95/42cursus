/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:27:40 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 22:27:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	if (src != NULL && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	ret = ft_strlen(dst) + ft_strlen(src);
	if (dstsize < ft_strlen(dst) + 1)
		return (dstsize + ft_strlen(src));
	else
	{
		while (j < dstsize - 1 && src[i] != '\0')
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
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
void	test9_dst_gt_dstsize_case(void);
void	test10_dst_overlap_src_case(void);
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
	test9_dst_gt_dstsize_case();
	test10_dst_overlap_src_case();
	return (0);
}
void	test1_normal_case(void)
{
	char	ori_dst[30] = "Hello, \0";
	char	ft_dst[30] = "Hello, \0";
	char	*src = "42 world!";
	size_t	dstsize = strlen(ori_dst) + strlen(src) + 1;
	printf("///test1_normal_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	{
		printf("--after strlcat--\n");
		printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
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
	size_t	dstsize = 10;
	printf("\n///test2_dstsize_lt_len_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	{
		printf("--after strlcat--\n");
		printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
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
	size_t	dstsize = dstsize = strlen(ori_dst) + strlen(src) + 1;
	printf("\n///test3_dst_include_0_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	{
		printf("--after strlcat--\n");
		printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
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
	size_t	dstsize = dstsize = strlen(ori_dst) + strlen(src) + 1;
	printf("\n///test4_src_include_0_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	{
		printf("--after strlcat--\n");
		printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
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
	printf("\n///test5_dst_null_dstsize_0_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	{
		printf("--after strlcat--\n");
		printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
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
	printf("\n///test6_dstsize_0_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	{
		printf("--after strlcat--\n");
		printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
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
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	printf("src null is SEGV\n");
	// strlcat(ori_dst, src, dstsize);
	// ft_strlcat(ft_dst, src, dstsize);
	// if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	// {
	// 	printf("--after strlcat--\n");
	// 	printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
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
	char	*src = NULL;
	size_t	dstsize = 1;
	printf("\n///test8_dst_null_dstsize_not_0_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	printf("dst null && dstsize not 0 is SEGV\n");
	// strlcat(ori_dst, src, dstsize);
	// ft_strlcat(ft_dst, src, dstsize);
	// if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	// {
	// 	printf("--after strlcat--\n");
	// 	printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
	// 	printf("OK :)\n");
	// }
	// else
	// {
	// 	printf("NG :(\n");
	// 	exit (0);
	// }
	return ;
}
void	test9_dst_gt_dstsize_case(void)
{
	char	ori_dst[30] = "Hello, \0";
	char	ft_dst[30] = "Hello, \0";
	char	*src = "42 world!";
	size_t	dstsize = 3;
	printf("\n///test9_dst_gt_dstsize_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, src, dstsize);
	printf("dst null && dstsize not 0 is SEGV\n");
	strlcat(ori_dst, src, dstsize);
	ft_strlcat(ft_dst, src, dstsize);
	if (strlcat(ori_dst, src, dstsize) == ft_strlcat(ft_dst, src, dstsize))
	{
		printf("--after strlcat--\n");
		printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, src, dstsize), ori_dst);
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
	char	ft_dst[30] = "Hello, 42 world!\0";
	char	*ori_src;
	char	*ft_src;
	size_t	dstsize = strlen(ori_dst) * 2;
	ori_src = &ori_dst[7];
	ft_src = &ft_dst[7];
	printf("\n///test10_dst_overlap_src_case///\n");
	printf("--before strlcat--\n");
	printf("dst: %s\nsrc: %s\ndstsize: %zu\n", ori_dst, ori_src, dstsize);
	printf("dst null && dstsize not 0 is SEGV\n");
	// strlcat(ori_dst, ori_src, dstsize);
	// ft_strlcat(ft_dst, ft_src, dstsize);
	if (strlcat(ori_dst, ori_src, dstsize) == ft_strlcat(ft_dst, ft_src, dstsize))
	{
		printf("--after strlcat--\n");
		printf("ret: %zu\ndst: %s\n", strlcat(ori_dst, ori_src, dstsize), ori_dst);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}
*/
