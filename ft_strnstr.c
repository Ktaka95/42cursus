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

static char	*ft_strnstr_body(char *h, char *n, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	if (ft_strlen(needle) == 0 || (len == 0 && haystack == NULL))
		return (h);
	else if (ft_strlen(needle) > ft_strlen(haystack) || len < ft_strlen(needle))
		return (NULL);
	return (ft_strnstr_body(h, n, len));
}

char	*ft_strnstr_body(char *h, char *n, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (i + ft_strlen(n) - 1 < len)
	{
		j = i;
		k = 0;
		while (k < ft_strlen(n))
		{
			if (h[j] == n[k])
			{
				j++;
				k++;
			}
			else
				break ;
		}
		if (k == ft_strlen(n))
			return (h + i);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char *str = NULL;
// 	char *p = NULL;
// 	char *q = NULL;
// 	char *str2 = "";
// 	printf("str, p, qのアドレス→%p, %p, %p\n", str, p, q);
// 	p = strnstr(str, str2, 20);
// 	printf("strnstr→%s: %s\n%p, %p\n", str, p, str, p);
// 	q = ft_strnstr(str, str2, 20);
// 	printf("ft_strnstr→%s: %s\n%p, %p\n", str, q, str, q);
// 	return 0;
// }
