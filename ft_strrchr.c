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
		while (i > 0 && str[i] != (char)c)
			i--;
		if (str[i] == (char)c)
			return (str + i);
		return (NULL);
	}
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char	str[] = "abc\0de", *p1, *p2;
// 	int		c = '\0';

// 	p1 = strrchr(str, c);
// 	p2 = ft_strrchr(str, c);
// 	p1--;
// 	p2--;
// 	printf("%s, %s\n", p1, p2);
// 	return 0;
// }
