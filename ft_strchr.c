/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:15:09 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/01 23:15:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (c == 0)
	{
		while (*str != '\0')
			str++;
		return (str);
	}
	else
	{
		while (*str != '\0')
		{
			if (*str == c)
				return (str);
			str++;
		}
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "abcdefghijklmnopqrstuvwxyz", *p;
// 	int c;

// 	c = '\0';
// 	p = ft_strchr(str, c);
// 	printf("%s\n", p);

// 	return 0;
// }
