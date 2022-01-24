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

int	ft_strcmp(const char	*s1, const char	*s2);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*h;
	char	*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (ft_strlen(needle) == 0)
		return (h);
	else if (ft_strlen(needle) > ft_strlen(haystack) || ft_strlen(needle) > len)
		return (NULL);
	else
	{
		while (ft_strlen(h) > ft_strlen(n) && i < len)
		{
			if (ft_strncmp(h, n, ft_strlen(n)) == 0)
				return (h);
			else
				h++;
				i++;
		}
		return (NULL);
	}
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "abcdefghijklmnabcdefghijklmn";
	char *p = str;
	char str2[] = "hijk";
	p = ft_strnstr(str, str2, 9);
	printf("%s\n", p);
	return 0;
}

