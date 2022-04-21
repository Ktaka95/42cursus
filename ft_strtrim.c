/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:11:57 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/21 13:31:50 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start_trim_count(char *s1, char const *set);

static size_t	ft_end_trim_count(char *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;

	ret = (char *)s1;
	if (ret == NULL)
		return (NULL);
	if (set == NULL)
		return (ret);
	start = ft_start_trim_count(ret, set);
	if (start == ft_strlen(ret))
		return (ft_strdup(""));
	end = ft_end_trim_count(ret, set);
	ret = ft_substr(ret, start, ft_strlen(ret) - start - end);
	return (ret);
}

size_t	ft_start_trim_count(char *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

size_t	ft_end_trim_count(char *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		count++;
		if (i == 0)
			break ;
		i--;
	}
	return (count);
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_no_trim_case(void);
void	test3_s1_null_case(void);
void	test4_set_null_case(void);
void	test5_all_trimmed_case(void);
void	test6_all_trimmed_case2(void);
void	test7_s1_UINT_MAX_case(void);

int	main(void)
{
	test1_normal_case();
	test2_no_trim_case();
	test3_s1_null_case();
	test4_set_null_case();
	test5_all_trimmed_case();
	test6_all_trimmed_case2();
	test7_s1_UINT_MAX_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	*s1 = "  	 Hello, 	 42	 	 world!  	 ";
	char	*set = " \t";
	char	*ret = NULL;

	printf("///test1_normal_case///\n");
	printf("--before trim--\n");
	printf("s1: %s\nset: %s\n", s1, set);
	ret = ft_strtrim(s1, set);
	printf("--after trim--\n");
	printf("%s\n", ret);
	return ;
}

void	test2_no_trim_case(void)
{
	char	*s1 = "Hello, 	 42	 	 world!";
	char	*set = " \t";
	char	*ret = NULL;

	printf("\n///test2_no_trim_case///\n");
	printf("--before trim--\n");
	printf("s1: %s\nset: %s\n", s1, set);
	ret = ft_strtrim(s1, set);
	printf("--after trim--\n");
	printf("%s\n", ret);
	return ;
}

void	test3_s1_null_case(void)
{
	char	*s1 = NULL;
	char	*set = "abcdefg\0";
	char	*ret = NULL;

	printf("\n///test3_s1_null_case///\n");
	printf("--before trim--\n");
	printf("s1: %s\nset: %s\n", s1, set);
	ret = ft_strtrim(s1, set);
	printf("--after trim--\n");
	printf("%s\n", ret);
	return ;
}

void	test4_set_null_case(void)
{
	char	*s1 = "Hello, 42 world!";
	char	*set = NULL;
	char	*ret = NULL;

	printf("\n///test4_set_null_case///\n");
	printf("--before trim--\n");
	printf("s1: %s\nset: %s\n", s1, set);
	ret = ft_strtrim(s1, set);
	printf("--after trim--\n");
	printf("%s\n", ret);
	return ;
}

void	test5_all_trimmed_case(void)
{
	char	*s1 = "Hello, 42 world!";
	char	*set = strdup(s1);
	char	*ret = NULL;

	printf("\n///test5_all_trimmed_case///\n");
	printf("--before trim--\n");
	printf("s1: %s\nset: %s\n", s1, set);
	ret = ft_strtrim(s1, set);
	printf("--after trim--\n");
	printf("ret: %s\nlen: %zu\n", ret, strlen(ret));
	// if (ret[0] == '\0')
		// printf("OK :)\n");
	return ;
}

void	test6_all_trimmed_case2(void)
{
	char	*s1;
	char	*set = "a";
	char	*ret = NULL;
	size_t	count = UINT_MAX;
	int		c = 'a';

	printf("\n///test6_all_trimmed_case2///\n");
	s1 = malloc((count + 1) * sizeof(char));
	if (s1 == NULL)
	{
		printf("could not allocate\n");
		return ;
	}
	s1[count] = '\0';
	memset(s1, c, count);

	printf("--before trim--\n");
	printf("s1_len: %zu\nset: %s\n", strlen(s1), set);
	ret = ft_strtrim(s1, set);
	printf("--after trim--\n");
	printf("ret: %s\nlen: %zu\n", ret, strlen(ret));
	// if (ret[0] == '\0')
		// printf("OK :)\n");
	return ;
}

void	test7_s1_UINT_MAX_case(void)
{
	char	*s1;
	char	*set = "a";
	char	*ret = NULL;
	size_t	count = UINT_MAX;
	int		c = 'a';

	printf("\n///test7_s1_UINT_MAX_case///\n");
	s1 = malloc((count + 1) * sizeof(char));
	if (s1 == NULL)
	{
		printf("could not allocate\n");
		return ;
	}
	s1[count] = '\0';
	memset(s1, c, count);
	s1[count - 2] = 'b';
	printf("--before trim--\n");
	printf("s1_len: %zu\nset: %s\n", strlen(s1), set);
	ret = ft_strtrim(s1, set);
	printf("--after trim--\n");
	printf("%s\n", ret);
	return ;
}
*/
