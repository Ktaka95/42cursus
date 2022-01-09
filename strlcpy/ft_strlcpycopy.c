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

#include <stddef.h>

size_t	ft_strlen(const char	*s);

size_t	ft_strlcpy(char *restrict dst,
	const char *restrict src, size_t dstsize)
{
	size_t	i;
	int	ret;

	i = 0;
	ret = 0;
	if ((dst[0] == '\0') && (src[0] == '\0'))
	{
		ret = 0;
	}
	if (dstsize == 0)
	{
		ret = ft_strlen(src);
	}
	else
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		ret = (ft_strlen(src));
	}
	return (ret);
}

size_t	ft_strlen(const char	*s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	int	i;
	int	j;
	char s1[4] = {'1', '2', '3', '4'};
	j = strlcpy(s1, "abc", 0);

	i = 0;
	while (s1[i])
	{
		printf("%c", s1[i]);
		i++;
	}
	printf ("\n");
	printf ("%c", s1[2]);
	printf ("\n");
	printf ("%c", s1[0]);
	printf ("\n");
	printf ("%d\n", j);

	char s11[4] = {'1', '2', '3', '4'};
	j = ft_strlcpy(s11, "abc", 0);

	i = 0;
	while (s11[i])
	{
		printf("%c", s11[i]);
		i++;
	}
	printf ("\n");
	printf ("%c", s11[2]);
	printf ("\n");
	printf ("%c", s11[0]);
	printf ("\n");
	printf ("%d\n", j);

	printf ("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

	char s0[4] = {'1', '2', '3', '4'};
	j = strlcpy(s0, "abcdefg", 4);

	i = 0;
	while (s0[i])
	{
		printf("%c", s0[i]);
		i++;
	}
	printf ("\n");
	printf ("%c", s0[2]);
	printf ("\n");
	printf ("%c", s0[0]);
	printf ("\n");
	printf ("%d\n", j);

	char s22[4] = {'1', '2', '3', '4'};
	j = ft_strlcpy(s22, "abcdefg", 4);

	i = 0;
	while (s22[i])
	{
		printf("%c", s22[i]);
		i++;
	}
	printf ("\n");
	printf ("%c", s22[2]);
	printf ("\n");
	printf ("%c", s22[0]);
	printf ("\n");
	printf ("%d\n", j);

	return (0);
}
