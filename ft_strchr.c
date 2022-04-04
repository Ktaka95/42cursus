/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:15:09 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/01 23:15:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (c == 0)
	{
		while (*str != '\0')
			str++;
		return (str);
	}
	else
	{
		while (*str != '\0')
		{
			if (*str == (char)c)
				return (str);
			str++;
		}
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

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
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strchr---\n");
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
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strchr---\n");
		printf("No occurance\n");
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
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strchr---\n");
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
	int		c = '4';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test4_include_0_case///\n");
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strchr---\n");
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
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	printf("***THIS CASE IS SEGV***\n");
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strchr---\n");
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
