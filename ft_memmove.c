/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:52:42 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/22 14:01:41 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst == src || len == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_dstnull_srcnull_size0_case(void);
void	test3_dstnull_srcnull_sizenot0_case(void);
void	test4_dstnull_size0_case(void);
void	test5_srcnull_size0_case(void);
void	test6_dst_include_0_case(void);
void	test7_src_include_0_case(void);
void	test8_dst_overlap_case(void);
void	test9_dst_overlap_case2(void);
void	test10_segv_case(void);

int main(void)
{
	test1_normal_case();
	test2_dstnull_srcnull_size0_case();
	test3_dstnull_srcnull_sizenot0_case();
	test4_dstnull_size0_case();
	test5_srcnull_size0_case();
	test6_dst_include_0_case();
	test7_src_include_0_case();
	test8_dst_overlap_case();
	test9_dst_overlap_case2();
	test10_segv_case();
	return 0;
}

void	test1_normal_case(void)
{
	char	ori_dst[] = "abcdefgh";
	char	ft_dst[] = "abcdefgh";
	char	src[] = "ABCDEFG";
	size_t	size = 3;

	printf("///test1_normal_case///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, src, size);
	ft_memmove(ft_dst, src, size);
	if (strcmp(ori_dst, ft_dst) == 0)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_dstnull_srcnull_size0_case(void)
{
	char	*ori_dst = NULL;
	char	*ft_dst = NULL;
	char	*src = NULL;
	size_t	size = 0;

	printf("///test2_dstnull_srcnull_size0_case///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, src, size);
	ft_memmove(ft_dst, src, size);
	if (ori_dst == NULL && ft_dst == NULL)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_dstnull_srcnull_sizenot0_case(void)
{
	char	*ori_dst = NULL;
	char	*ft_dst = NULL;
	char	*src = NULL;
	size_t	size = 5;

	printf("///test3_dstnull_srcnull_sizenot0_case///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, src, size);
	ft_memmove(ft_dst, src, size);
	if (ori_dst == NULL && ft_dst == NULL)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_dstnull_size0_case(void)
{
	char	*ori_dst = NULL;
	char	*ft_dst = NULL;
	char	src[] = "ABCDEFG";
	size_t	size = 0;

	printf("///test4_dstnull_size0_case///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, src, size);
	ft_memmove(ft_dst, src, size);
	if (ori_dst == NULL && ft_dst == NULL)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test5_srcnull_size0_case(void)
{
	char	ori_dst[] = "abcdefgh";
	char	ft_dst[] = "abcdefgh";
	char	*src = NULL;
	size_t	size = 0;

	printf("///test5_srcnull_size0_case///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, src, size);
	ft_memmove(ft_dst, src, size);
	if (strcmp(ori_dst, ft_dst) == 0)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test6_dst_include_0_case(void)
{
	char	ori_dst[] = "abc\0d";
	char	ft_dst[] = "abc\0d";
	char	*src = "ABCDEFG";
	size_t	size = 5;

	printf("///test6_dst_include_0_case///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, src, size);
	ft_memmove(ft_dst, src, size);
	if (memcmp(ori_dst, ft_dst, 5) == 0)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test7_src_include_0_case(void)
{
	char	ori_dst[] = "abcdefgh";
	char	ft_dst[] = "abcdefgh";
	char	*src = "ABC\0DEFG";
	size_t	size = 5;

	printf("///test7_src_include_0_case///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, src, size);
	ft_memmove(ft_dst, src, size);
	if (memcmp(ori_dst, ft_dst, 5) == 0)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test8_dst_overlap_case(void)
{
	char	*ori_dst;
	char	*ft_dst;
	char	src[] = "ABCDEFG";
	size_t	size = 5;

	ori_dst = &src[2];
	ft_dst = &src[2];

	printf("///test8_dst_overlap_case///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, src, size);
	ft_memmove(ft_dst, src, size);
	if (strcmp(ori_dst, ft_dst) == 0)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test9_dst_overlap_case2(void)
{
	char	ori_dst[] = "ABCDEFG";
	char	ft_dst[] = "ABCDEFG";;
	char	*ori_src;
	char	*ft_src;
	size_t	size = 5;

	ori_src = &ori_dst[2];
	ft_src = &ft_dst[2];

	printf("///test9_dst_overlap_case2///\n\
dst: %s\nsrc: %s\nsize: %zu\n", ori_dst, ori_src, size);
	printf("before memmove: dst =>\t%s\n", ori_dst);
	memmove(ori_dst, ori_src, size);
	ft_memmove(ft_dst, ft_src, size);
	if (strcmp(ori_dst, ft_dst) == 0)
		printf("after ori_memmove =>\t%s\n\
after ft_memmove =>\t%s\nOK :)\n\n",ori_dst, ft_dst);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test10_segv_case(void)
{
	char	dst[] = "abcdefgh";
	char	src[] = "ABCDEFG";
	size_t	size = 10;

	printf("///test10_following_case_segv///\n");
	ft_memmove(NULL, src, size);
	ft_memmove(dst, NULL, size);
	ft_memmove(dst, src, size); //size > dst_size

	return ;
}
*/
