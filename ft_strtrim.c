/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:11:57 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:11:58 by ktaka            ###   ########.fr       */
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
	if (ret == NULL || set == NULL)
		return (NULL);
	start = ft_start_trim_count(ret, set);
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
	while (ft_strchr(set, s1[i]))
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
	while (ft_strchr(set, s1[i]))
	{
		i--;
		count++;
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
void	test5_s1_too_long_case(void);

int	main(void)
{
	test1_normal_case();
	test2_no_trim_case();
	test3_s1_null_case();
	test4_set_null_case();
	test5_s1_too_long_case();
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

void	test5_s1_too_long_case(void)
{
	char	*s1;
	char	*set = "a";
	char	*ret = NULL;
	size_t	count = INT_MAX;
	int		c = 'a';

	printf("\n///test5_s1_too_long_case///\n");
	s1 = calloc(count, sizeof(char));
	memset(s1, c, count);
	printf("--before trim--\n");
	printf("s1: %zu\nset: %s\n", strlen(s1), set);
	ret = ft_strtrim(s1, set);
	printf("--after trim--\n");
	printf("%zu\n", strlen(ret));
	return ;
}
*/
