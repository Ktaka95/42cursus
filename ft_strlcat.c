/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:27:40 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 22:27:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;
	size_t	ret;

	dstlen = ft_strlen(dst);
	i = 0;
	ret = ft_strlen(dst) + ft_strlen(src);
	if (dst != NULL && src != NULL && dstsize == 0)
		return (ft_strlen(src));
	else if (dst != NULL && src != NULL && dstsize <= dstlen + 1)
		return (ret);
	else if (dst != NULL && src != NULL && dstsize > dstlen + 1)
	{
		while ((dstlen < sizeof dst - 1
				|| dstlen < dstsize - 1) && src[i] != '\0')
		{
			dst[dstlen] = src[i];
			dstlen++;
			i++;
		}
		dst[dstlen] = '\0';
	}
	return (ret);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int	i;
// 	size_t	j;
// 	char s1[5] = "ABCDE";
// 	char s2[] = "abcdefgh";
// 	j = ft_strlcat(s1, s2, 5);

// 	i = 0;
// 	while (s1[i])
// 	{
// 		printf("%d: [%c]\n", i, s1[i]);
// 		i++;
// 	}
// 	printf("%d: [%c]\n", i, s1[i]);
// 	printf ("\n%zu\n", j);
// 	return (0);
// }
