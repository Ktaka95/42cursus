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

char	*ft_strdup(const char	*s1)
{
	size_t	i;
	char	*heap;

	i = 0;
	heap = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (heap == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		heap[i] = s1[i];
		i++;
	}
	heap[i] = '\0';
	return (heap);
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_empty_case(void);
void	test3_SEGV_case(void);

int	main(void)
{
	test1_normal_case();
	test2_empty_case();
	test3_SEGV_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	*str = "Hello, 42 world!";
	char	*ori_dup = strdup(str);
	char	*ft_dup = ft_strdup(str);

	printf("///test1_normal_case///\n");
	printf("---before strdup---\n");
	printf("ori_str:\t%s\naddress:\t%p\n", str, str);
	if (strcmp(ori_dup, ft_dup) == 0)
	{
		printf("---after strdup---\n");
		printf("ori_dup:\t%p\n", ori_dup);
		printf("ft_dup:\t\t%p\n", ft_dup);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_empty_case(void)
{
	char	*str = "";
	char	*ori_dup = strdup(str);
	char	*ft_dup = ft_strdup(str);

	printf("\n///test2_empty_case///\n");
	printf("---before strdup---\n");
	printf("ori_str:\t%s\naddress:\t%p\n", str, str);
	if (strcmp(ori_dup, ft_dup) == 0)
	{
		printf("---after strdup---\n");
		printf("ori_dup:\t%p\n", ori_dup);
		printf("ft_dup:\t\t%p\n", ft_dup);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_SEGV_case(void)
{
	size_t	len = SIZE_MAX;
	char	*str = NULL;
	char	*ori_dup;
	char	*ft_dup;

	printf("\n///test3_SEGV_case///\n");
	str = calloc(len, sizeof(char));
	memset(str, 'a', len);
	ori_dup = strdup(str);
	ft_dup = ft_strdup(str);
	printf("---before strdup---\n");
	printf("ori_str:\t%zu\naddress:\t%p\n", strlen(str), str);
	if (strcmp(ori_dup, ft_dup) == 0)
	{
		printf("---after strdup---\n");
		printf("ori_dup:\t%p\n", ori_dup);
		printf("ft_dup:\t\t%p\n", ft_dup);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}
*/
