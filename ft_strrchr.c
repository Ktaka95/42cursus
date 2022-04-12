/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:59:03 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/06 15:59:04 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = ft_strlen(str);
	while (i > 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return (str + i);
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	test1_normal_case(void);
void	test2_no_occur_case(void);
void	test3_several_times_occur_case(void);
void	test4_include_0_case(void);
void	test5_str_null_case(void);

int main(void)
{
	test1_normal_case();
	test2_no_occur_case();
	test3_several_times_occur_case();
	test4_include_0_case();
	test5_str_null_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	*str = "Hello, 42 world!";
	int		c = '4';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("///test1_normal_case///\n");
	printf("---before strrchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strrchr(str, c);
	ft_ret = ft_strrchr(str, c);
	if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strrchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_no_occur_case(void)
{
	char	*str = "Hello, 42 world!";
	int		c = '?';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test2_no_occur_case///\n");
	printf("---before strrchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strrchr(str, c);
	ft_ret = ft_strrchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strrchr---\n");
		printf("No occurrence\n");
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_several_times_occur_case(void)
{
	char	*str = "Hello, 42 world!";
	int		c = ' ';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test3_several_times_occur_case///\n");
	printf("---before strrchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strrchr(str, c);
	ft_ret = ft_strrchr(str, c);
	if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strrchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_include_0_case(void)
{
	char	*str = "Hello,\0 42 world!";
	int		c = 'l';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test4_include_0_case///\n");
	printf("---before strrchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strrchr(str, c);
	ft_ret = ft_strrchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strrchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strrchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test5_str_null_case(void)
{
	char	*str = NULL;
	int		c = 'a';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test5_str_null_case///\n");
	printf("---before strrchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	printf("***THIS CASE IS SEGV***\n");
	ori_ret = strrchr(str, c);
	ft_ret = ft_strrchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strrchr---\n");
		printf("%s\n", ft_ret);
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
