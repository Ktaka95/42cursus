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

	n = 0;
	i = 0;
	if (s == NULL || f == NULL)
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

void	ori_func(unsigned i, char *s);
void	test1_empty_case(void);
void	test2_1character_case(void);
void	test3_normal_case(void);
void	test4_null_case(void);

int main(void)
{
	test1_empty_case();
	test2_1character_case();
	test3_normal_case();
	test4_null_case();
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
*/
