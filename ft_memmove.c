/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:52:42 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/11 17:52:44 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*unsigned_char_dst;
	unsigned char	*unsigned_char_src;

	unsigned_char_dst = (unsigned char *)dst;
	unsigned_char_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	else
	{
		while (len > 0)
		{
			unsigned_char_dst[len - 1] = unsigned_char_src[len - 1];
			len--;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
// 	int i = 0;
// 	int j = 0;
// 	char *dst_null = NULL;
// 	char *src_null = NULL;
// 	char *dst_null2 = NULL;
// 	char *dst_null3 = NULL;
// 	char *dst_null4 = NULL;
// 	char src_abcde[] = "ABCDE";
// 	char dst_abcde[] = "abcdefgh";
// 	char dst_abcde2[] = "abcdefgh";
// 	char dst_abcde3[] = "abcdefgh";
// 	char dst_abcde4[] = "abcdefgh";
// 	char dst_abcde6[] = "abc\0def\0gh";
// 	char dst_abcde7[] = "abcdefgh";
// 	char src_abcde2[] = "AB\0CD\0E";
// 	// char dst_abcde5[] = "abcde";

// 	ft_memmove(dst_null,src_null,0);
// 	printf("dstnullにsrcnullを0バイトコピー\nコピー後の文字列→%s\n\n",dst_null);
// 	ft_memmove(dst_null2,src_null,5);
// 	printf("dstnullにsrcnullを5バイトコピー\nコピー後の文字列→%s\n\n",dst_null2);
// 	ft_memmove(dst_null3,src_abcde,0);
// 	printf("dstnullにABCDEを0バイトコピー\nコピー後の文字列→%s\n\n",dst_null3);
// 	ft_memmove(dst_abcde,src_null,0);
// 	printf("abcdeにNULLを0バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde);
// 	ft_memmove(dst_abcde3,src_abcde,0);
// 	printf("abcdeにABCDEを0バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde3);
// 	ft_memmove(dst_abcde4,src_abcde,5);
// 	printf("abcdeにABCDEを5バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde4);
// 	ft_memmove(dst_abcde6,src_abcde,5);
// 	printf("abc0def0ghにABCDEを5バイトコピー\nコピー後の文字列→");
// 	while (i < 10)
// 	{
// 		printf("[%c]", dst_abcde6[i]);
// 		i++;
// 	}
// 	printf("\n\n");
// 	ft_memmove(dst_abcde7,src_abcde2,5);
// 	printf("abcdefghにAB0CD0Eを5バイトコピー\nコピー後の文字列→");
// 	while (j < 8)
// 	{
// 		printf("[%c]", dst_abcde7[j]);
// 		j++;
// 	}
// 	printf("\n\n");
// 	printf("/////////以下セグフォ/////////\n");
// 	ft_memmove(dst_null4,src_abcde,5);
// 	printf("dstnullにABCDEを5バイトコピー\nコピー後の文字列→%s\n\n",dst_null4);
// 	ft_memmove(dst_abcde2,src_null,5);
// 	printf("abcdeにNULLを5バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde2);
// 	// memmove(dst_abcde5,src_abcde,10);
// 	// printf("abcdeにABCDEを10バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde5);
// 	// 常にoverflowするため、コンパイル不可
// 	return 0;
// }
