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
	unsigned int	i;
	char			*ret_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	ret_s = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (ret_s == NULL)
		return (NULL);
	else
	{
		while (s[i] != '\0')
		{
			ret_s[i] = f(i, s[i]);
			i++;
		}
	}
	return (ret_s);
}

// char	test_toupper(unsigned int i, char c)
// {
// 	i = 32;
// 	if ('a' <= c && c <= 'z')
// 		c -= i;
// 	return (c);
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	*s1_basic = "abcdefg";
// 	char	*s1_null = NULL;
// 	char	(* testtoupper)(unsigned int, char);
// 	char	*s2_basic;
// 	char	*s2_null;
// 	size_t	i = 0;

// 	testtoupper = test_toupper;
// 	s2_basic = ft_strmapi(s1_basic, testtoupper);
// 	while (s2_basic[i] != '\0')
// 	{
// 		printf("%zu: [%c]\n", i, s2_basic[i]);
// 		i++;
// 	}
// 	if (s2_basic[i] == '\0')
// 		printf("%zu: [\\'0']\n", i);
// 	s2_null = ft_strmapi(s1_null, testtoupper);
// 	printf("%s\n", s2_null);
// 	return (0);
// }
