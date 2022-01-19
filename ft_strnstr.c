/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:15:40 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/06 17:15:41 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t 	i;
	char	*const_to_char_haystack;
	int		j;
	int		str_same_checker;

	i = len;
	const_to_char_haystack = (char *)haystack;
	j = 0;
	str_same_checker = 1;
	if (ft_strlen(needle) == 0)
		return (haystack);
	if (ft_strlen(haystack) >= len)
	{
		while (i < ft_strlen(haystack))
		{
			const_to_char_haystack[i] = '\0';
			i++;
		}
	while (*haystack)
	{

	}
	}







	if (str_same_checker == 0)
		return (const_to_char_haystack);
	else
		return (0);
}

// char	*ft_strstr(const char *haystack, const char *needle)
// {

// }

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "abcdefghijklmnabcdefghijklmn", *p;

// 	p = ft_strnstr(str, "c", 10);
// 	printf("%s\n", p);

// 	return 0;
// }

