/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:38:10 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/18 13:38:12 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char	*s1)
{
	int		i;
	int		len_s1;
	char	*heap;

	i = 0;
	len_s1 = ft_strlen(s1);
	heap = (char *)malloc(sizeof(char) * (len_s1 + 1));
	if (heap == NULL)
		return (NULL);
	else
	{
		while (s1[i])
		{
			heap[i] = s1[i];
			i++;
		}
		heap[i] = '\0';
	}
	return (heap);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*p;
// 	char	*q;
// 	char	str1[] = "Hello, World";
// 	char	str2[] = "Hello, World";

// 	p = strdup(str1);
// 	q = ft_strdup(str2);

// 	str1[5] = '!';
// 	str2[5] = '!';

// 	printf("Expected_Output\n");
// 	printf("%s\n",str1);
// 	printf("%s\n",p);
// 	printf("--------------------\n");
// 	printf("Actual_Output\n");
// 	printf("%s\n",str2);
// 	printf("%s\n",q);
// 	return (0);
// }
