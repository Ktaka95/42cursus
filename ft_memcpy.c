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
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	else if (n == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
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
// 	int k = 0;
// 	char *dst_null = NULL;
// 	char *src_null = NULL;
// 	char *dst_null2 = NULL;
// 	char *dst_null3 = NULL;
// 	char dst_size3[6] = "abc\0d";
// 	char dst_size4[10] = "abc\0d\0efg";
// 	// char *dst_null4 = NULL;
// 	char src_abcde[] = "AB\0CDE\0";
// 	char dst_abcde[] = "abcdefgh";
// 	char dst_abcde2[] = "abcdefgh";
// 	// char dst_abcde3[] = "abcdefgh";
// 	// char dst_abcde4[] = "abcdefgh";
// 	// char dst_abcde6[] = "abc\0def\0gh";
// 	// char dst_abcde7[] = "abcdefgh";
// 	// char src_abcde2[] = "AB\0CD\0E";
// 	// char dst_abcde5[] = "abcde";

// 	printf("コピー前のdst文字列、アドレス→%s, %p\n", dst_null, dst_null);
// 	ft_memcpy(dst_null, src_null, 0);
// 	printf("dstnullにsrcnullを0バイトコピー\nコピー後の文字列→%s\nコピー後のアドレス→%p\n\n",dst_null, dst_null);

// 	printf("コピー前のdst文字列、アドレス→%s, %p\n", dst_null2, dst_null2);
// 	ft_memcpy(dst_null2, src_null, 5);
// 	printf("dstnullにsrcnullを5バイトコピー\nコピー後の文字列→%s\nコピー後のアドレス→%p\n\n",dst_null2, dst_null2);

// 	printf("コピー前のdst文字列、アドレス→%s, %p\n", dst_null3, dst_null3);
// 	ft_memcpy(dst_null3, src_abcde, 0);
// 	printf("dstnullにABCDEを0バイトコピー\nコピー後の文字列→%s\nコピー後のアドレス→%p\n\n",dst_null3, dst_null3);

// 	printf("コピー前のdst文字列、アドレス→%s, %p\n", dst_abcde, dst_abcde);
// 	ft_memcpy(dst_abcde, src_null, 0);
// 	printf("abcdeにsrcnullを0バイトコピー\nコピー後の文字列→%s\nコピー後のアドレス→%p\n\n",dst_abcde, dst_abcde);

// 	printf("コピー前のdst文字列、アドレス→%s, %p\n", dst_abcde2, dst_abcde2);
// 	ft_memcpy(dst_abcde2, src_abcde, 3);
// 	printf("abcdeにABCDEを3バイトコピー\nコピー後の文字列→%s\nコピー後のアドレス→%p\n\n",dst_abcde2, dst_abcde2);

// 	printf("dst_sizeのサイズ→%lu\n", sizeof(dst_size3));
// 	printf("コピー前のdst文字列、アドレス→%s, %p\n", dst_size3, dst_size3);
// 	printf("%sに%sを6バイトコピー\n", dst_size3, src_abcde);
// 	ft_memcpy(dst_size3, src_abcde, 6);
// 	printf("コピー後の文字列→%s\nコピー後のアドレス→%p\n\n", dst_size3, dst_size3);
// 	while (i < 6)
// 	{
// 		if (dst_size3[i] == '\0')
// 			printf("%d: ['\\0']\n", i);
// 		else
// 			printf("%d: [%c]\n", i, dst_size3[i]);
// 		i++;
// 	}

// 	printf("\ndst_sizeのサイズ→%lu\n", sizeof(dst_size4));
// 	printf("コピー前のdst文字列、アドレス→%s, %p\n", dst_size4, dst_size4);
// 	printf("%sに%sを10バイトコピー\n", dst_size4, src_abcde);
// 	ft_memcpy(dst_size4, src_abcde, 10);
// 	printf("コピー後の文字列→%s\nコピー後のアドレス→%p\n\n", dst_size4, dst_size4);
// 	while (j < 10)
// 	{
// 		if (dst_size4[j] == '\0')
// 			printf("%d: ['\\0']\n", j);
// 		else
// 			printf("%d: [%c]\n", j, dst_size4[j]);
// 		j++;
// 	}

// 	printf("\n------------\n");
// 	char src[] = "test basic";
// 	char dst[22];
// 	while (k < 22)
// 	{
// 		if (dst[k] == '\0')
// 			printf("%d: ['\\0']\n", k);
// 		else
// 			printf("%d: [%c]\n", k, dst[k]);
// 		k++;
// 	}
// 	k = 0;
// 	while (k < 22)
// 	{
// 		if (src[k] == '\0')
// 			printf("%d: ['\\0']\n", k);
// 		else
// 			printf("%d: [%c]\n", k, src[k]);
// 		k++;
// 	}
// 	ft_memcpy(dst, src, 22);
// 	k = 0;
// 	while (k < 22)
// 	{
// 		if (dst[k] == '\0')
// 			printf("%d: ['\\0']\n", k);
// 		else
// 			printf("%d: [%c]\n", k, dst[k]);
// 		k++;
// 	}
// 	printf("done\n");
// 	// memcpy(dst_null2,src_null,5);
// 	// printf("dstnullにsrcnullを5バイトコピー\nコピー後の文字列→%s\n\n",dst_null2);
// 	// memcpy(dst_null3,src_abcde,0);
// 	// printf("dstnullにABCDEを0バイトコピー\nコピー後の文字列→%s\n\n",dst_null3);
// 	// memcpy(dst_abcde,src_null,0);
// 	// printf("abcdeにNULLを0バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde);
// 	// memcpy(dst_abcde3,src_abcde,0);
// 	// printf("abcdeにABCDEを0バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde3);
// 	// memcpy(dst_abcde4,src_abcde,5);
// 	// printf("abcdeにABCDEを5バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde4);
// 	// memcpy(dst_abcde6,src_abcde,5);
// 	// printf("abc0def0ghにABCDEを5バイトコピー\nコピー後の文字列→");
// 	// while (i < 10)
// 	// {
// 	// 	printf("[%c]", dst_abcde6[i]);
// 	// 	i++;
// 	// }
// 	// printf("\n\n");
// 	// memcpy(dst_abcde7,src_abcde2,5);
// 	// printf("abcdefghにAB0CD0Eを5バイトコピー\nコピー後の文字列→");
// 	// while (j < 8)
// 	// {
// 	// 	printf("[%c]", dst_abcde7[j]);
// 	// 	j++;
// 	// }
// 	// printf("\n\n");
// 	// printf("/////////以下セグフォ/////////\n");
// 	// memcpy(dst_null4,src_abcde,5);
// 	// printf("dstnullにABCDEを5バイトコピー\nコピー後の文字列→%s\n\n",dst_null4);
// 	// memcpy(dst_abcde2,src_null,5);
// 	// printf("abcdeにNULLを5バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde2);
// 	// memcpy(dst_abcde5,src_abcde,10);
// 	// printf("abcdeにABCDEを10バイトコピー\nコピー後の文字列→%s\n\n",dst_abcde5);
// 	// 常にoverflowするため、コンパイル不可
// 	return 0;
// }
