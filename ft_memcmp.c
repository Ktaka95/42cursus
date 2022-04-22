/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:10:02 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/22 21:42:30 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

void	test1_len_0_case(void);
void	test2_len_0_case2(void);
void	test3_null_null_0_cmp_case(void);
void	test4_normal_cmp_case(void);
void	test5_diff_after_n_case(void);
void	test6_including_null_case(void);
void	test7_including_null_case2(void);
void	test8_null_null_n_not_0_case(void);

int main(void)
{
	test1_len_0_case();
	test2_len_0_case2();
	test3_null_null_0_cmp_case();
	test4_normal_cmp_case();
	test5_diff_after_n_case();
	test6_including_null_case();
	test7_including_null_case2();
	test8_null_null_n_not_0_case();
	return(0);
}

void	test1_len_0_case(void)
{
	char	s1[] = "";
	char	s2[] = "abc";
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 0;

	printf("///test1_len_0_case///\n");
	printf("%s\"\": %s, %dbyte cmp\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("OK :)\n");
	else
		printf("\nNG :(\n");
}

void	test2_len_0_case2(void)
{
	char	s1[] = "abc";
	char	s2[] = "";
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 0;

	printf("\n///test2_len_0_case2///\n");
	printf("%s: %s\"\", %dbyte cmp\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("OK :)\n");
	else
		printf("\nNG :(\n");
}

void	test3_null_null_0_cmp_case(void)
{
	char	*s1 = NULL; 
	char	*s2 = NULL;
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 0;

	printf("\n///test3_null_null_0_cmp_case///\n");
	printf("%s: %s, %dbyte cmp\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("OK :)\n");
	else
		printf("\nNG :(\n");
}

void	test4_normal_cmp_case(void)
{
	char	*s1 = "abcda";
	char	*s2 = "abcd";
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = strlen(s1);

	printf("\n///test4_normal_cmp_case///\n");
	printf("%s: %s, %dbyte cmp\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("OK :)\n");
	else
		printf("\nNG :(\n");
}

void	test5_diff_after_n_case(void)
{
	char	*s1 = "abcda";
	char	*s2 = "abcd";
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = strlen(s2);

	printf("\n///test5_diff_after_n_case///\n");
	printf("%s: %s, %dbyte cmp\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("OK :)\n");
	else
		printf("\nNG :(\n");
}

void	test6_including_null_case(void)
{
	char	*s1 = "\0a\0b\0c1";
	char	*s2 = "\0a\0b\0c1";
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 7;

	printf("\n///test6_including_null_case///\n");
	printf("%s: %s, %dbyte cmp\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("OK :)\n");
	else
		printf("\nNG :(\n");
}

void	test7_including_null_case2(void)
{
	char	*s1 = "abc\0d\0e1";
	char	*s2 = "abc\0d";
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 8;

	printf("\n///test7_including_null_case2///\n");
	printf("%s: %s, %dbyte cmp\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("OK :)\n");
	else
		printf("\nNG :(\n");
}

void	test8_null_null_n_not_0_case(void)
{
	char	*s1 = NULL;
	char	*s2 = NULL;
	int		ori_ret = 0;
	int		ft_ret = 0;
	int		i = 1;

	printf("\n///test8_null_null_n_not_0_case///\n");
	printf("%s: %s, %dbyte cmp\n", s1, s2, i);
	ft_ret = ft_memcmp(s1, s2, i);
	ori_ret = memcmp(s1, s2, i);
	printf("ori_ret\tft_ret\n%d\t%d\n", ori_ret, ft_ret);
	if (ft_ret == ori_ret)
		printf("OK :)\n");
	else
		printf("\nNG :(\n");

}
*/
