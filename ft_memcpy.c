/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
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
	unsigned char	*unsigned_char_dst;
	unsigned char	*unsigned_char_src;

	unsigned_char_dst = (unsigned char *)dst;
	unsigned_char_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	else
	{
		while (n > 0)
		{
			unsigned_char_dst[n - 1] = unsigned_char_src[n - 1];
			n--;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void) {
// 	char buffer11[10];	/* 重複しない領域用1 */
// 	char buffer22[10];	/* 重複しない領域用2 */
// 	char buffer33[20];	/* 重複する領域用 */
// 	char buffer1[10];	/* 重複しない領域用1 */
// 	char buffer2[10];	/* 重複しない領域用2 */
// 	char buffer3[20];	/* 重複する領域用 */

// 	/* 重複しない領域へのcopy */
// 	char * restrict s11 = buffer11;
// 	char * restrict s22 = buffer22;
// 	char * restrict s1 = buffer1;
// 	char * restrict s2 = buffer2;
// 	memset(s22, '2', sizeof(buffer22));
// 	memset(s2, '2', sizeof(buffer2));

// 	/* s22 -> s11へ5バイト分コピー */
// 	memset(s11, '1', sizeof(buffer11));
// 	memset(s1, '1', sizeof(buffer1));
// 	fprintf(stdout, "before memcpy s11[%.10s]\n", s11);
// 	fprintf(stdout, "before memcpy s22[%.10s]\n", s22);
// 	fprintf(stdout, ">after memcpy s11[%.10s]\n", (char*)memcpy(s11, s22, 5));
// 	fprintf(stdout, "before ft_memcpy s1[%.10s]\n", s1);
// 	fprintf(stdout, "before ft_memcpy s2[%.10s]\n", s2);
// 	fprintf(stdout, ">after ft_memcpy s1[%.10s]\n", (char*)ft_memcpy(s1, s2, 5));

// 	memset(s11, '1', sizeof(buffer11));
// 	memset(s1, '1', sizeof(buffer1));

// 	/* 重複する領域へのcopy その１ */
// 	s11 = &buffer33[0];
// 	s22 = &buffer33[1];
// 	s1 = &buffer3[0];
// 	s2 = &buffer3[1];

// 	fprintf(stdout, "\n\n");

// 	/* s22 -> s11へ15バイト分コピー */
// 	memset(&buffer33[0], '1', 10);
// 	memset(&buffer33[10], '2', 10);
// 	memset(&buffer3[0], '1', 10);
// 	memset(&buffer3[10], '2', 10);
// 	fprintf(stdout, "before memcpy buffer33[%.20s]\n", buffer33);
// 	fprintf(stdout, "before memcpy s11[%.15s]\n", s11);
// 	fprintf(stdout, "before memcpy s22[%.15s]\n", s22);
// 	fprintf(stdout, ">after memcpy s11[%.15s]\n", (char*)memcpy(s11, s22, 15));
// 	fprintf(stdout, "before ft_memcpy buffer3[%.20s]\n", buffer3);
// 	fprintf(stdout, "before ft_memcpy s1[%.15s]\n", s1);
// 	fprintf(stdout, "before ft_memcpy s2[%.15s]\n", s2);
// 	fprintf(stdout, ">after ft_memcpy s1[%.15s]\n", (char*)ft_memcpy(s1, s2, 15));

// 	memset(&buffer33[0], '1', 10);
// 	memset(&buffer33[10], '2', 10);
// 	memset(&buffer3[0], '1', 10);
// 	memset(&buffer3[10], '2', 10);

// 	/* 重複する領域へのcopy その２ */
// 	s11 = &buffer33[1];
// 	s22 = &buffer33[0];
// 	s1 = &buffer3[1];
// 	s2 = &buffer3[0];

// 	fprintf(stdout, "\n\n");

// 	/* s22 -> s11へ15バイト分コピー */
// 	memset(&buffer33[0], '1', 10);
// 	memset(&buffer33[10], '2', 10);
// 	memset(&buffer3[0], '1', 10);
// 	memset(&buffer3[10], '2', 10);
// 	fprintf(stdout, "before memcpy buffer33[%.20s]\n", buffer33);
// 	fprintf(stdout, "before memcpy s11[%.15s]\n", s11);
// 	fprintf(stdout, "before memcpy s22[%.15s]\n", s22);
// 	fprintf(stdout, ">after memcpy s11[%.15s]\n", (char*)memcpy(s11, s22, 15));
// 	fprintf(stdout, "before ft_memcpy buffer3[%.20s]\n", buffer3);
// 	fprintf(stdout, "before ft_memcpy s1[%.15s]\n", s1);
// 	fprintf(stdout, "before ft_memcpy s2[%.15s]\n", s2);
// 	fprintf(stdout, ">after ft_memcpy s1[%.15s]\n", (char*)ft_memcpy(s1, s2, 15));

// 	memset(&buffer33[0], '1', 10);
// 	memset(&buffer33[10], '2', 10);
// 	memset(&buffer3[0], '1', 10);
// 	memset(&buffer3[10], '2', 10);

// 	return(0);
// }
