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
	size_t	i;

	str = (char *)s;
	i = ft_strlen(str);
	if (i == 0 && c != '\0')
		return (NULL);
	else if (i == 0 && c == '\0')
		return (str);
	else
	{
		while (i > 0 && str[i] != c)
			i--;
		if (str[i] == c)
			return (str + i);
		return (NULL);
	}
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	// char str[] = "", *p;
// 	// int c;

// 	// c = '\0';
// 	// p = ft_strrchr(str, c);
// 	// printf("%s\n", p);

// 	char	*s = "";
// 	char	*ret = NULL;

// 	printf("%p, %p\n", s, ret);
// 	ret = ft_strrchr(s, 'A');
// 	printf("%s, %s\n", s, ret);
// 	printf("%p, %p\n", s, ret);

// 	return 0;
// }
