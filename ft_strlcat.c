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

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// static void	strlcat_dst_null_case(char *s1, char *s2);

// static void	strlcat_dstsize_lt_dstplus1(char *s1, char *s2);

// static void	strlcat_dstsize_lt_dstplussrcplus1(char *s1, char *s2);

// static void	strlcat_dstsize_ge_dstplussrcplus1(char *s1, char *s2);

// static void	strlcat_middle_null(char *s1, char *s2);

// int main(void)
// {
// 	char	*dst_null = NULL;
// 	char	dst_abcdefgh[] = "abcdefgh";
// 	char	dst_abcdefgh2[] = "abcdefgh";
// 	char	dst_abcdefgh3[] = "abcdefgh";
// 	char	dst_middle_null[] = "abcd\0efg";
// 	char	src_abcde[] = "ABCDE";
// 	char	src_middle_null[] = "AB\0CDE";

// 	strlcat_dst_null_case(dst_null, src_abcde);
// 	strlcat_dstsize_lt_dstplus1(dst_abcdefgh, src_abcde);
// 	strlcat_dstsize_lt_dstplussrcplus1(dst_abcdefgh2, src_abcde);
// 	strlcat_dstsize_ge_dstplussrcplus1(dst_abcdefgh3, src_abcde);
// 	strlcat_middle_null(dst_middle_null, src_middle_null);
// 	return 0;
// }

// void	strlcat_dst_null_case(char *s1, char *s2)
// {
// 	int		or_ret = 0;
// 	int		ft_ret = 0;
// 	int		dstsize = 0;
// 	printf("\n/////dst_null_case/////\n");
// 	printf("<before_strlcat>\n");
// 	printf("dst:\t\t%s\n", s1);
// 	printf("src:\t\t%s\ndstsize:\t%d\n", s2, dstsize);
// 	or_ret = strlcat(s1, s2, dstsize);
// 	ft_ret = ft_strlcat(s1, s2, dstsize);
// 	printf("<after_strlcat>\n");
// 	printf("dst:\t\t%s\n", s1);
// 	printf("///return///\nor_ret: %d\nft_ret: %d\n", or_ret, ft_ret);
// 	if (ft_ret == or_ret)
// 		printf("\nOK :)\n\n");
// 	else
// 		printf("\nNG :(\n\n");
// }

// void	strlcat_dstsize_lt_dstplus1(char *s1, char *s2)
// {
// 	int		or_ret = 0;
// 	int		ft_ret = 0;
// 	size_t	dstsize = 0;
// 	printf("\n/////dstsize_lt_dstplus1/////\n");
// 	while (dstsize < strlen(s1) + 1)
// 	{
// 		printf("<before_strlcat>\n");
// 		char	*or_dst = strdup(s1);
// 		char	*ft_dst = strdup(s1);
// 		printf("or_dst:\t\t%s\n", or_dst);
// 		printf("ft_dst:\t\t%s\n", ft_dst);
// 		printf("src:\t\t%s\ndstsize:\t%zu\n", s2, dstsize);
// 		or_ret = strlcat(or_dst, s2, dstsize);
// 		ft_ret = ft_strlcat(ft_dst, s2, dstsize);
// 		printf("<after_strlcat>\n");
// 		printf("or_dst:\t\t%s\n", or_dst);
// 		printf("ft_dst:\t\t%s\n", ft_dst);
// 		if (strcmp(or_dst, ft_dst) == 0)
// 		printf("or_dst == ft_dst :)\n");
// 		else
// 		printf("or_dst != ft_dst :(\n");
// 		printf("///return///\nor_ret: %d\nft_ret: %d\n", or_ret, ft_ret);
// 		if (ft_ret == or_ret)
// 			printf("\nOK :)\n\n");
// 		else
// 			printf("\nNG :(\n\n");
// 		dstsize++;
// 	}
// }

// void	strlcat_dstsize_lt_dstplussrcplus1(char *s1, char *s2)
// {
// 	int		or_ret = 0;
// 	int		ft_ret = 0;
// 	size_t	dstsize = strlen(s1) + 1;
// 	printf("\n/////dstsize_lt_dstplussrcplus1/////\n");
// 	while (dstsize < strlen(s1) + strlen(s2) + 1)
// 	{
// 		printf("<before_strlcat>\n");
// 		char	*or_dst = strdup(s1);
// 		char	*ft_dst = strdup(s1);
// 		printf("or_dst:\t\t%s\n", or_dst);
// 		printf("ft_dst:\t\t%s\n", ft_dst);
// 		printf("src:\t\t%s\ndstsize:\t%zu\n", s2, dstsize);
// 		or_ret = strlcat(or_dst, s2, dstsize);
// 		ft_ret = ft_strlcat(ft_dst, s2, dstsize);
// 		printf("<after_strlcat>\n");
// 		printf("or_dst:\t\t%s\n", or_dst);
// 		printf("ft_dst:\t\t%s\n", ft_dst);
// 		if (strcmp(or_dst, ft_dst) == 0)
// 			printf("or_dst == ft_dst :)\n");
// 		else
// 			printf("or_dst != ft_dst :(\n");
// 		printf("///return///\nor_ret: %d\nft_ret: %d\n", or_ret, ft_ret);
// 		if (ft_ret == or_ret)
// 			printf("\nOK :)\n\n");
// 		else
// 			printf("\nNG :(\n\n");
// 		dstsize++;
// 	}
// }

// void	strlcat_dstsize_ge_dstplussrcplus1(char *s1, char *s2)
// {
// 	int		or_ret = 0;
// 	int		ft_ret = 0;
// 	size_t	dstsize = strlen(s1) + strlen(s2) + 1;
// 	int		i = 0;
// 	printf("\n/////dstsize_ge_dstplussrcplus1/////\n");
// 	while (i < 3)
// 	{
// 		printf("<before_strlcat>\n");
// 		char	*or_dst = strdup(s1);
// 		char	*ft_dst = strdup(s1);
// 		printf("or_dst:\t\t%s\n", or_dst);
// 		printf("ft_dst:\t\t%s\n", ft_dst);
// 		printf("src:\t\t%s\ndstsize:\t%zu\n", s2, dstsize);
// 		or_ret = strlcat(or_dst, s2, dstsize);
// 		ft_ret = ft_strlcat(ft_dst, s2, dstsize);
// 		printf("<after_strlcat>\n");
// 		printf("or_dst:\t\t%s\n", or_dst);
// 		printf("ft_dst:\t\t%s\n", ft_dst);
// 		if (strcmp(or_dst, ft_dst) == 0)
// 			printf("or_dst == ft_dst :)\n");
// 		else
// 			printf("or_dst != ft_dst :(\n");
// 		printf("///return///\nor_ret: %d\nft_ret: %d\n", or_ret, ft_ret);
// 		if (ft_ret == or_ret)
// 			printf("\nOK :)\n\n");
// 		else
// 			printf("\nNG :(\n\n");
// 		dstsize++;
// 		i++;
// 	}
// }

// void	strlcat_middle_null(char *s1, char *s2)
// {
// 	int		or_ret = 0;
// 	int		ft_ret = 0;
// 	size_t	dstsize = 0;
// 	printf("\n/////middle_null/////\n");
// 	while (dstsize < strlen(s1) + strlen(s2) + 4)
// 	{
// 		printf("<before_strlcat>\n");
// 		char	*or_dst = strdup(s1);
// 		char	*ft_dst = strdup(s1);
// 		printf("or_dst:\t\tabcd\\0efg\n");
// 		printf("ft_dst:\t\tabcd\\0efg\n");
// 		printf("src:\t\tAB\\0CDE\ndstsize:\t%zu\n", dstsize);
// 		or_ret = strlcat(or_dst, s2, dstsize);
// 		ft_ret = ft_strlcat(ft_dst, s2, dstsize);
// 		printf("<after_strlcat>\n");
// 		printf("or_dst:\t\t%s\n", or_dst);
// 		printf("ft_dst:\t\t%s\n", ft_dst);
// 		if (strcmp(or_dst, ft_dst) == 0)
// 			printf("or_dst == ft_dst :)\n");
// 		else
// 			printf("or_dst != ft_dst :(\n");
// 		printf("///return///\nor_ret: %d\nft_ret: %d\n", or_ret, ft_ret);
// 		if (ft_ret == or_ret)
// 			printf("\nOK :)\n\n");
// 		else
// 			printf("\nNG :(\n\n");
// 		dstsize++;
// 	}
// }
