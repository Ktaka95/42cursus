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
// 	char	str[] = "abcdefghijklmnopqrstuvdwxyz", *p1, *p2;
// 	int		c = 'd';
// 	int		i = 0;

// 	while (i < INT_MAX)
// 	{
// 		p1 = strchr(str, c + i);
// 		p2 = ft_strchr(str, c + i);
// 		if (p1 == NULL && p2 == NULL)
// 			printf("NULL, %d\n", i);
// 		else
// 			if (strcmp(p1, p2) == 0)
// 				printf("OK, %d\n", i);
// 			else
// 			{
// 				printf("%d, NG :(\n", i);
// 				exit (0);
// 			}
// 		i += 128;
// 	}
// 	return 0;
// }
