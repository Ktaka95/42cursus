/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:25:57 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 16:25:58 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int	ret;

	i = 0;
	ret = 0;
	if (dstsize == 0)
		ret = ft_strlen(src);
	else
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		ret = (ft_strlen(src));
	}
	return (ret);
}

// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	int	i;
// 	int	j;
// 	char s1[4] = {'1', '2', '3', '4'};
// 	j = strlcpy(s1, "abc", 0);

// 	i = 0;
// 	while (s1[i])
// 	{
// 		printf("%c", s1[i]);
// 		i++;
// 	}
// 	printf ("\n");
// 	printf ("%c", s1[2]);
// 	printf ("\n");
// 	printf ("%c", s1[0]);
// 	printf ("\n");
// 	printf ("%d\n", j);

// 	char star[4] = {'1', '2', '3', '4'};
// 	j = ft_strlcpy(star, "abc", 0);

// 	i = 0;
// 	while (star[i])
// 	{
// 		printf("%c", star[i]);
// 		i++;
// 	}
// 	printf ("\n");
// 	printf ("%c", star[2]);
// 	printf ("\n");
// 	printf ("%c", star[0]);
// 	printf ("\n");
// 	printf ("%d\n", j);

// 	printf ("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

// 	char s0[5] = {'1', '2', '3', '4', '5'};
// 	j = strlcpy(s0, "abc", 5);

// 	i = 0;
// 	while (s0[i])
// 	{
// 		printf("%c", s0[i]);
// 		i++;
// 	}
// 	printf ("\n");
// 	printf ("%c", s0[3]);
// 	printf ("\n");
// 	printf ("%c", s0[4]);
// 	printf ("\n");
// 	printf ("%d\n", j);

// 	char s22[5] = {'1', '2', '3', '4', '5'};
// 	j = ft_strlcpy(s22, "abc", 5);

// 	i = 0;
// 	while (s22[i])
// 	{
// 		printf("%c", s22[i]);
// 		i++;
// 	}
// 	printf ("\n");
// 	printf ("%c", s22[3]);
// 	printf ("\n");
// 	printf ("%c", s22[4]);
// 	printf ("\n");
// 	printf ("%d\n", j);

// 	return (0);
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    size_t  res1;
    size_t  res2;
    char    *tmp;

if (argc <= 1)
	return (0);
tmp = strdup(argv[1]);
    printf("---origin---\n");
    printf("before:%s\n", tmp);
    res1 = strlcpy(tmp, argv[2], atoi(argv[3]));
    printf("after:%s\n", tmp);
    printf("res:%zu\n", res1);
    printf("---made---\n");
    printf("before:%s\n", argv[1]);
    res2 = ft_strlcpy(argv[1], argv[2], atoi(argv[3]));
    printf("after:%s\n", argv[1]);
    printf("res:%zu\n", res2);
    return (0);
}
