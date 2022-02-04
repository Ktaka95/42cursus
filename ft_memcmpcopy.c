/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:10:02 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:10:03 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	size_t			nullcheck;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	nullcheck = ft_strlen((const char *)str1) + ft_strlen((const char *)str2);
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (str1[i] - str2[i]);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	// char	str1[10] = "\0a\0b\0c1";
	// char	str2[10] = "\0a\0b\0c1";
	// char	*str1 = NULL;
	// char	*str2 = NULL;
	char *str1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *str2 = "\xff\xaa\xde\x02";
	size_t	i = 8;
	int		ori_ret = 0;
	int		ft_ret = 0;
	// int		j = 0;

	printf("Original_memcmp\tft_memcmp\n");
	// while (j < 100)
	// {
	// 	printf("%d:\t[%d]\t[%d]\n", j, str1[j], str2[j]);
	// 	j++;
	// }
	ft_ret = ft_memcmp(str1, str2, i);
	ori_ret = memcmp(str1, str2, i);
	// printf("%d\n", ori_ret);
	printf("%sと%s比較→%d : %d\n", str1, str2, ori_ret, ft_ret);
	return(0);
}
