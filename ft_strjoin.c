/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:10:37 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:10:37 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*joined_str;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	joined_str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joined_str[i] = s2[j];
		i++;
		j++;
	}
	return (joined_str);
}

/*
#include <string.h>
#include <stdio.h>

void	test1_normal_case(void);
void	test2_s1_empty_case(void);
void	test3_s2_empty_case(void);
void	test4_s1_null_case(void);
void	test5_s2_null_case(void);
void	test6_both_null_case(void);
void	test7_str_toolong_case(void);

int main(void)
{
	test1_normal_case();
	test2_s1_empty_case();
	test3_s2_empty_case();
	test4_s1_null_case();
	test5_s2_null_case();
	test6_both_null_case();
	test7_str_toolong_case();

	return (0);
}

void	test1_normal_case(void)
{
	char	*s1 = "Hello, ";
	char	*s2 = "42 wolrd!";
	char	*ret = NULL;

	printf("///test1_normal_case///\n");
	printf("---before_join---\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	ret = ft_strjoin(s1, s2);
	printf("---after_join---\n");
	printf("%s\n", ret);

	return ;
}

void	test2_s1_empty_case(void)
{
	char	*s1 = "";
	char	*s2 = "42 wolrd!";
	char	*ret = NULL;

	printf("\n///test2_s1_empty_case///\n");
	printf("---before_join---\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	ret = ft_strjoin(s1, s2);
	printf("---after_join---\n");
	printf("%s\n", ret);

	return ;
}

void	test3_s2_empty_case(void)
{
	char	*s1 = "Hello, ";
	char	*s2 = "";
	char	*ret = NULL;

	printf("\n///test3_s2_empty_case///\n");
	printf("---before_join---\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	ret = ft_strjoin(s1, s2);
	printf("---after_join---\n");
	printf("%s\n", ret);

	return ;
}

void	test4_s1_null_case(void)
{
	char	*s1 = NULL;
	char	*s2 = "42 wolrd!";
	char	*ret = NULL;

	printf("\n///test4_s1_null_case///\n");
	printf("---before_join---\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	ret = ft_strjoin(s1, s2);
	printf("---after_join---\n");
	printf("%s\n", ret);

	return ;
}

void	test5_s2_null_case(void)
{
	char	*s1 = "Hello, ";
	char	*s2 = NULL;
	char	*ret = NULL;

	printf("\n///test5_s2_null_case///\n");
	printf("---before_join---\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	ret = ft_strjoin(s1, s2);
	printf("---after_join---\n");
	printf("%s\n", ret);

	return ;
}

void	test6_both_null_case(void)
{
	char	*s1 = NULL;
	char	*s2 = NULL;
	char	*ret = NULL;

	printf("\n///test6_both_null_case///\n");
	printf("---before_join---\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	ret = ft_strjoin(s1, s2);
	printf("---after_join---\n");
	printf("%s\n", ret);

	return ;
}

void	test7_str_toolong_case(void)
{
	size_t	len = LONG_MAX;
	char	*s1 = NULL;
	char	*s2 = NULL;
	char	*ret = NULL;

	printf("\n///test7_str_toolong_case///\n");
	s1 = calloc(len, sizeof(char));
	s2 = calloc(len, sizeof(char));
	memset(s1, 'a', len);
	memset(s2, 'b', len);
	printf("---before_join---\n");
	printf("s1: %zu\ns2: %zu\n", strlen(s1), strlen(s2));
	ret = ft_strjoin(s1, s2);
	printf("---after_join---\n");
	printf("%zu\n", strlen(ret));

	return ;
}
*/
