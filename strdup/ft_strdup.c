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

#include <stdlib.h>

int		ft_strlen(char	*str);

char	*ft_strdup(char	*src)
{
	int		i;
	int		len_src;
	char	*heap;

	i = 0;
	len_src = ft_strlen(src);
	heap = (char *)malloc(sizeof(char) * (len_src + 1));
	if (heap == NULL)
		return (NULL);
	else
	{
		while (src[i])
		{
			heap[i] = src[i];
			i++;
		}
		heap[i] = '\0';
	}
	return (heap);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*p;
	char	*q;
	char	str1[] = "Hello, World";
	char	str2[] = "Hello, World";

	p = strdup(str1);
	q = ft_strdup(str2);

	str1[5] = '!';
	str2[5] = '!';

	printf("Expected_Output\n");
	printf("%s\n",str1);
	printf("%s\n",p);
	printf("--------------------\n");
	printf("Actual_Output\n");
	printf("%s\n",str2);
	printf("%s\n",q);
	return (0);
}
*/
