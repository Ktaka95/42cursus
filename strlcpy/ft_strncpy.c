/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:13:18 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/08 21:13:20 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count_len(char	*str);

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = count_len(src);
	while (i < n)
	{
		if (src_len >= n)
		{
			dest[i] = src[i];
			i++;
		}
		else if (src_len < n)
		{
			if (i < src_len)
				dest[i] = src[i];
			else if (src_len <= i)
				dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

unsigned int	count_len(char	*str)
{
	unsigned int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "ABCDEFGHI";
	char	str2[] = "12345";
	char	str3[] = "ABCDEFGHI";
	char	str4[] = "12345";

	printf("Expected_Output:\n");
	strncpy(str1, str2, 3);
	printf("str1:%s\n", str1);
	strncpy(str1, str2, 8);
	printf("str1:%s\n", str1);

	printf("--------------------\n");
	printf("Actual_Output:\n");
	ft_strncpy(str3, str4, 3);
	printf("str1:%s\n", str3);
	ft_strncpy(str3, str4, 8);
	printf("str1:%s\n", str3);
	return (0);
}

*/
