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
			if (*str == (char)c)
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
// 	char	str[] = "abcdefghijkl\0mnopqrstuvdwxyz", *p1, *p2;
// 	int		c = '\0';

// 	p1 = strchr(str, c);
// 	p2 = ft_strchr(str, c);
// 	p1++;
// 	p2++;
// 	printf("%s, %s\n", p1, p2);
// 	return 0;
// }
