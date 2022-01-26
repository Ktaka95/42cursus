/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:59:03 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/06 15:59:04 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	if (c == 0)
		return (str);
	str--;
	while (i > 0)
	{
		if (*str == c)
			return (str);
		str--;
		i--;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "1abcdefghijklmn12abcdefghijklmn2", *p;
// 	int c;

// 	c = '\0';
// 	p = ft_strrchr(str, c);
// 	printf("%s\n", p);

// 	return 0;
// }
