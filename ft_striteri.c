/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:56:19 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 01:56:20 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	n;
	size_t			i;
	size_t			s_len;

	n = 0;
	i = 0;
	if (s == NULL || f == NULL)
		return ;
	s_len = ft_strlen(s);
	if (s_len > UINT_MAX)
		return ;
	while (s[i] != '\0')
	{
		f(n, s + i);
		n++;
		i++;
	}
	return ;
}

/*
#include <stdio.h>
#include <string.h>

void	ori_func(unsigned i, char *s);
void	test1_empty_case(void);
void	test2_1character_case(void);
void	test3_normal_case(void);
void	test4_null_case(void);
void	test5_uint_max_case(void);
void	test6_over_uint_case(void);

int main(void)
{
	test1_empty_case();
	test2_1character_case();
	test3_normal_case();
	test4_null_case();
	test5_uint_max_case();
	test6_over_uint_case();
	return (0);
}

void	ori_func(unsigned i, char *s)
{
	*s = i + '0';
}

void	test1_empty_case(void)
{
	char	str[] = "";

	printf("///test1_empty_case///\n");
	printf("---before striteri---\nstr: %s\n", str);
	ft_striteri(str, ori_func);
	printf("---after_striteri---\nstr: %s\n", str);
	return ;
}

void	test2_1character_case(void)
{
	char	str[] = "a";

	printf("\n///test2_1character_case///\n");
	printf("---before striteri---\nstr: %s\n", str);
	ft_striteri(str, ori_func);
	printf("---after_striteri---\nstr: %s\n", str);
	return ;
}

void	test3_normal_case(void)
{
	char	str[] = "abcdefghij";

	printf("\n///test3_normal_case///\n");
	printf("---before striteri---\nstr: %s\n", str);
	ft_striteri(str, ori_func);
	printf("---after_striteri---\nstr: %s\n", str);
	return ;
}

void	test4_null_case(void)
{
	char	*str = NULL;

	printf("\n///test4_null_case///\n");
	printf("---before striteri---\nstr: %s\n", str);
	ft_striteri(str, ori_func);
	printf("---after_striteri---\nstr: %s\n", str);
	return ;
}

void	test5_uint_max_case(void)
{
	char	*str = NULL;
	size_t	uint_max = UINT_MAX;

	str = malloc((uint_max + 1) * (sizeof(char)));
	if (str == NULL)
	{
		printf("could_not_malloc\n");
		exit (0);
	}
	str = memset(str, 'a', uint_max);
	str[uint_max] = '\0';
	printf("\n///test5_uint_max_case///\n");
	printf("before striteri: \n%zu\n", strlen(str));
	printf("after striteri:\n");
	ft_striteri(str, ori_func);
	printf("[%d]: %c\n", 0, str[0]);
	printf("[%zu]: %c\n", uint_max - 1, str[uint_max - 1]);
	return ;
}

void	test6_over_uint_case(void)
{
	char	*str = NULL;
	size_t	uint_max = UINT_MAX;

	str = malloc((uint_max + 2) * (sizeof(char)));
	if (str == NULL)
	{
		printf("could_not_malloc\n");
		exit (0);
	}
	str = memset(str, 'a', uint_max + 1);
	str[uint_max + 1] = '\0';
	printf("\n///test6_over_uint_case///\n");
	printf("before striteri: \n%zu\n", strlen(str));
	printf("after striteri:\n");
	ft_striteri(str, ori_func);
	printf("[%d]: %c\n", 0, str[0]);
	printf("[%zu]: %c\n", uint_max, str[uint_max]);
	return ;
}
*/
