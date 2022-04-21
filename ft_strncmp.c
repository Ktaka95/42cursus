/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:41:36 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/21 12:36:55 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	test1_normal_match_case(void);
void	test2_normal_wrong_case(void);
void	test3_n_gt_str_case(void);
void	test4_same_str_include_0_case(void);
void	test5_not_same_str_include_0_case(void);
void	test6_n_0_case(void);
void	test7_one_str_empty_case(void);
void	test8_both_str_null_n_0_case(void);
void	test9_both_str_null_n_not_0_case(void);
void	test10_one_str_null_n_not_0_case(void);

int	main(void)
{
	test1_normal_match_case();
	test2_normal_wrong_case();
	test3_n_gt_str_case();
	test4_same_str_include_0_case();
	test5_not_same_str_include_0_case();
	test6_n_0_case();
	test7_one_str_empty_case();
	test8_both_str_null_n_0_case();
	test9_both_str_null_n_not_0_case();
	test10_one_str_null_n_not_0_case();
	return (0);
}

void	test1_normal_match_case(void)
{
	char	*s1 = "Hello, 42 world!";
	char	*s2 = "Hello, 42 world!";
	size_t	n = strlen(s1);

	printf("///test1_normal_match_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	{
		printf("diff: %d\n", strncmp(s1, s2, n));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_normal_wrong_case(void)
{
	char	*s1 = "Hello, 42 world!";
	char	*s2 = "Hello, 42 world?";
	size_t	n = strlen(s1);

	printf("\n///test2_normal_wrong_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	{
		printf("diff: %d\n", strncmp(s1, s2, n));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_n_gt_str_case(void)
{
	char	*s1 = "Hello, 42 world!";
	char	*s2 = "Hello, 42 world!";
	size_t	n = strlen(s1) + 1;

	printf("\n///test3_n_gt_str_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	{
		printf("diff: %d\n", strncmp(s1, s2, n));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_same_str_include_0_case(void)
{
	char	*s1 = "Hello, 42\0 world!";
	char	*s2 = "Hello, 42\0 world!";
	size_t	n = 20;

	printf("\n///test4_same_str_include_0_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	{
		printf("diff: %d\n", strncmp(s1, s2, n));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test5_not_same_str_include_0_case(void)
{
	char	*s1 = "Hello, 42\0 world!";
	char	*s2 = "Hello, 42\0 world?";
	size_t	n = 20;

	printf("\n///test5_not_same_str_include_0_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	{
		printf("diff: %d\n", strncmp(s1, s2, n));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test6_n_0_case(void)
{
	char	*s1 = "Hello, 42 world!";
	char	*s2 = "!dlrow 24 ,olleH";
	size_t	n = 0;

	printf("\n///test6_n_0_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	{
		printf("diff: %d\n", strncmp(s1, s2, n));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test7_one_str_empty_case(void)
{
	char	*s1 = "Hello, 42 world!";
	char	*s2 = "";
	size_t	n = strlen(s1);

	printf("\n///test7_one_str_empty_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
		printf("OK :)\n");
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test8_both_str_null_n_0_case(void)
{
	char	*s1 = NULL;
	char	*s2 = NULL;
	size_t	n = 0;

	printf("\n///test8_both_str_null_n_0_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	{
		printf("diff: %d\n", strncmp(s1, s2, n));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test9_both_str_null_n_not_0_case(void)
{
	char	*s1 = NULL;
	char	*s2 = NULL;
	size_t	n = 10;

	printf("\n///test9_both_str_null_n_not_0_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	printf("***This case is SEGV***\n");
	// if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	// 	printf("OK :)\n");
	// else
	// {
	// 	printf("NG :(\n");
	// 	exit (0);
	// }
	return ;
}

void	test10_one_str_null_n_not_0_case(void)
{
	char	*s1 = "Hello, 42 world!";
	char	*s2 = NULL;
	size_t	n = strlen(s1);

	printf("\n///test10_one_str_null_n_not_0_case///\n");
	printf("s1: %s\ns2: %s\nn: %zu\n", s1, s2, n);
	printf("***This case is SEGV***\n");
	// if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
	// 	printf("OK :)\n");
	// else
	// {
	// 	printf("NG :(\n");
	// 	exit (0);
	// }
	// printf("%d\n", strncmp(s1, s2, n));
	return ;
}
*/
