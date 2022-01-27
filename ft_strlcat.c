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

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	*src = "aaa";
// 	char	dst1[10];
// 	char	dst2[10];
// 	int		ret1;
// 	int		ret2;

// 	printf("dst1, dst2にBをセット\n");
// 	printf("%lu\n", sizeof(dst1));
// 	memset(dst1, 'B', sizeof(dst1));
// 	memset(dst2, 'B', sizeof(dst2));
// 	printf("%s\n%s\n", dst1, dst2);

// 	printf("%lu\n", strlen(dst1));
// 	printf("%lu\n", strlen(dst2));
// 	printf("%zu\n", ft_strlen(dst1));
// 	printf("%zu\n", ft_strlen(dst2));

// 	strlcat(dst1, src, 10);
// 	printf("%s\n", dst1);
// 	printf("%lu\n", strlen(dst1));
// 	printf("%lu\n", ft_strlen(dst1));
// 	strlcat(dst1, src, 10);
// 	printf("%s\n", dst1);
// 	printf("%lu\n", strlen(dst1));
// 	printf("%lu\n", ft_strlen(dst1));
// 	ret1 = strlcat(dst1, src, 10);
// 	printf("%lu\n", strlen(dst1));
// 	printf("%lu\n", ft_strlen(dst1));
// 	printf("%lu\n", strlen(src));
// 	printf("%lu\n", ft_strlen(src));

// 	ft_strlcat(dst2, src, 10);
// 	printf("%s\n", dst2);
// 	printf("%lu\n", strlen(dst2));
// 	printf("%lu\n", ft_strlen(dst2));
// 	ft_strlcat(dst2, src, 10);
// 	printf("%s\n", dst2);
// 	printf("%lu\n", strlen(dst2));
// 	printf("%lu\n", ft_strlen(dst2));
// 	ret2 = ft_strlcat(dst2, src, 10);
// 	printf("%lu\n", strlen(dst2));
// 	printf("%lu\n", ft_strlen(dst2));
// 	printf("%lu\n", strlen(src));
// 	printf("%lu\n", ft_strlen(src));

// 	printf("%d\n%d\n", ret1, ret2);

// 	return (0);
// }
