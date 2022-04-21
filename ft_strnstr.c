/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:15:40 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/21 12:29:40 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	int		diff;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	if (len == 0 || ft_strlen(haystack) < needle_len)
		return (NULL);
	while (i + needle_len <= len)
	{
		diff = ft_strncmp(haystack + i, needle, needle_len);
		if (diff == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	test1_normal_case(void);
void	test2_no_occurrence_case(void);
void	test3_occur_over_len_case(void);
void	test4_haystack_empty_case(void);
void	test5_needle_empty_len_0_case(void);
void	test6_needle_empty_len_not_0_case(void);
void	test7_needle_gt_haystack_case(void);
void	test8_needle_gt_len_case(void);
void	test9_haystack_null_case(void);
void	test10_needle_null_case(void);
void	test11_haystack_null_len_not_0_case(void);
void	test12_len_gt_haystack(void);

int	main(void)
{
	test1_normal_case();
	test2_no_occurrence_case();
	test3_occur_over_len_case();
	test4_haystack_empty_case();
	test5_needle_empty_len_0_case();
	test6_needle_empty_len_not_0_case();
	test7_needle_gt_haystack_case();
	test8_needle_gt_len_case();
	test9_haystack_null_case();
	test10_needle_null_case();
	test11_haystack_null_len_not_0_case();
	test12_len_gt_haystack();
	return (0);
}

void	test1_normal_case(void)
{
	char	*haystack = "Hello, 42 world!";
	char	*needle = "42";
	size_t	len = strlen(haystack);
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("///test1_normal_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_no_occurrence_case(void)
{
	char	*haystack = "Hello, 42 world!";
	char	*needle = "43";
	size_t	len = strlen(haystack);
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test2_no_occurrence_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_occur_over_len_case(void)
{
	char	*haystack = "Hello, 42 world!";
	char	*needle = "world";
	size_t	len = 8;
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test3_occur_over_len_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_haystack_empty_case(void)
{
	char	*haystack = "";
	char	*needle = "Hello, 42 world!";
	size_t	len = strlen(needle);
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test4_haystack_empty_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test5_needle_empty_len_0_case(void)
{
	char	*haystack = "Hello, 42 world!";
	char	*needle = "";
	size_t	len = 0;
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test5_needle_empty_len_0_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test6_needle_empty_len_not_0_case(void)
{
	char	*haystack = "Hello, 42 world!";
	char	*needle = "";
	size_t	len = strlen(haystack);
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test6_needle_empty_len_not_0_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test7_needle_gt_haystack_case(void)
{
	char	*haystack = "Hello, 42 world!";
	char	*needle = "Hello, 42 world! Welcome!!";
	size_t	len = strlen(needle);
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test7_needle_gt_haystack_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test8_needle_gt_len_case(void)
{
	char	*haystack = "Hello, 42 world!";
	char	*needle = "Hello, 42 world! Welcome!!";
	size_t	len = strlen(haystack);
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test8_needle_gt_len_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test9_haystack_null_case(void)
{
	char	*haystack = NULL;
	char	*needle = "Hello, 42 world!";
	size_t	len = 0;
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test9_haystack_null_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test10_needle_null_case(void)
{
	char	*haystack = "Hello, 42 world!";
	char	*needle = NULL;
	size_t	len = 0;
	// char	*ori_ret = NULL;
	// char	*ft_ret = NULL;

	printf("\n///test10_needle_null_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	printf("needle null case is SEGV\n");
	// ori_ret = strnstr(haystack, needle, len);
	// ft_ret = ft_strnstr(haystack, needle, len);
	// printf("%s\n", ori_ret);
	// printf("%s\n", ft_ret);
	return ;
}

void	test11_haystack_null_len_not_0_case(void)
{
	char	*haystack = NULL;
	char	*needle = "Hello, 42 world!";
	size_t	len = 3;
	// char	*ori_ret = NULL;
	// char	*ft_ret = NULL;

	printf("\n///test11_haystack_null_len_not_0_case///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", haystack, needle, len);
	printf("haystack null && len != 0 case is SEGV\n");
	// ori_ret = strnstr(haystack, needle, len);
	// ft_ret = ft_strnstr(haystack, needle, len);
	// printf("%s\n", ori_ret);
	// printf("%s\n", ft_ret);
	return ;
}

void	test12_len_gt_haystack(void)
{
   char	*haystack = "Hello, 42 world!";
   char	*needle = "42";
   size_t	len = SIZE_MAX;
   char	*ori_ret = NULL;
   char	*ft_ret = NULL;

	printf("\n///test12_len_gt_haystack///\n");
	printf("--before strnstr--\n");
	printf("haystack:\t%s\nneedle:\t\t%s\nlen\t\t%zu\n", \
			haystack, needle, len);
	ori_ret = strnstr(haystack, needle, len);
	ft_ret = ft_strnstr(haystack, needle, len);
	if ((ori_ret == NULL && ft_ret == NULL) || strcmp(ori_ret, ft_ret) == 0)
	{
		printf("--after strnstr--\n");
		printf("str: %s\n", ori_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
}
*/
