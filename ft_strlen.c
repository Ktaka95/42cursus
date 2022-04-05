/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:02:09 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/13 14:02:13 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_huge_case(void);
void	test3_too_long_case(void);
void	test4_SEGV_case(void);

int	main(void)
{
	test1_normal_case();
	test2_huge_case();
	test3_too_long_case();
	test4_SEGV_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	*str = "Hello, 42 world!";

	printf("///test1_normal_case///\n");
	printf("str: %s\n", str);
	if (strlen(str) == ft_strlen(str))
	{
		printf("len: %zu\n", strlen(str));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_huge_case(void)
{
	size_t	count = INT_MAX;
	char	*str = calloc(count, sizeof(char));
	int		c = 'A';

	memset(str, c, count);
	printf("\n///test2_huge_case///\n");
	printf("strlen: %zu\n", strlen(str));
	if (strlen(str) == ft_strlen(str))
	{
		printf("len: %zu\n", strlen(str));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_too_long_case(void)
{
	size_t	count = SIZE_MAX;
	char	*str = calloc(count, sizeof(char));
	int		c = 'A';


	printf("\n///test3_too_long_case///\n");
	if (str == NULL)
	{
		printf("str too long!\n");
		return ;
	}
	memset(str, c, count);
	printf("strlen: %zu\n", strlen(str));
	if (strlen(str) == ft_strlen(str))
	{
		printf("len: %zu\n", strlen(str));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_SEGV_case(void)
{
	char	*str = NULL;

	printf("\n///test4_SEGV_case///\n");
	printf("str: %s\n", str);
	printf("***This case SEGV***\n");
	if (strlen(str) == ft_strlen(str))
	{
		printf("len: %zu\n", strlen(str));
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
