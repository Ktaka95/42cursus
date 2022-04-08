/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:12:18 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:12:19 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*ret;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len > UINT_MAX)
		return (NULL);
	ret = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ret[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	test_toupper(unsigned int, char c);
void	test1_normal_case(void);
void	test2_over_uint_case(void);

int main(void)
{
	test1_normal_case();
	test2_over_uint_case();
	return (0);
}

char	test_toupper(unsigned int i, char c)
{
	i = 32;

	if ('a' <= c && c <= 'z')
		c -= i;
	return (c);
}

void	test1_normal_case(void)
{
	char	*s1_basic = "XXXabcdefgXXX";
	char	*s1_ret;
	size_t	i = 0;

	s1_ret = ft_strmapi(s1_basic, test_toupper);

	printf("///test1_normal_case///\n");
	printf("before strmapi:\n%s\n", s1_basic);
	printf("after strmapi:\n");
	printf("index:\tchar\n");
	while (s1_ret[i] != '\0')
	{
		printf("%zu:\t[%c]\n", i, s1_ret[i]);
		i++;
	}
	if (s1_ret[i] == '\0')
		printf("%zu:\t[\\'0']\n", i);
	return ;
}

void	test2_over_uint_case(void)
{
	char	*s2_over_uint = NULL;
	char	*s2_memset = NULL;
	char	*s2_ret = NULL;
	size_t	uint_max = UINT_MAX;

	s2_over_uint = malloc((uint_max + 2) * (sizeof(char)));
	if (s2_over_uint == NULL)
	{
		printf("could_not_malloc\n");
		exit (0);
	}
	s2_memset = memset(s2_over_uint, 'a', uint_max + 1);
	s2_memset[uint_max + 1] = '\0';
	printf("\n///test2_over_uint_case///\n");
	printf("before strmapi: \n%zu\n", strlen(s2_memset));
	printf("after strmapi:\n");
	s2_ret = ft_strmapi(s2_memset, test_toupper);
	if (s2_ret == NULL)
		printf("%s\n", s2_ret);
	else
		printf("%zu\n", strlen(s2_ret));
}
*/
