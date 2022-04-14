/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:11:33 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/14 09:48:35 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == NULL || len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start + 1)
		len = ft_strlen(s) - start + 1;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_len_short_case(void);
void	test3_len_longer_case(void);
void	test4_s_null_case(void);
void	test5_len_0_case(void);
void	test6_start_longer_than_s_len_case(void);

int	main(void)
{
	test1_normal_case();
	test2_len_short_case();
	test3_len_longer_case();
	test4_s_null_case();
	test5_len_0_case();
	test6_start_longer_than_s_len_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	*str = "Welcome!! Hello, 42 world!";
	char	*target = "Hello, 42 world!";
	size_t	start = 10;
	size_t	len = strlen(target);
	char	*ret = NULL;

	printf("///test1_normal_case///\n");
	printf("--before substr--\n");
	printf("str: %s\nstart: %zu\nlen: %zu\n", str, start, len);
	ret = ft_substr(str, 10, len);
	if (strcmp(target, ret) == 0)
	{
		printf("--after substr--\n");
		printf("%s\n", ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_len_short_case(void)
{
	char	*str = "Welcome!! Hello, 42 world!";
	char	*target = "Hello, 42";
	size_t	start = 10;
	size_t	len = strlen(target);
	char	*ret = NULL;

	printf("\n///test2_len_short_case///\n");
	printf("--before substr--\n");
	printf("str: %s\nstart: %zu\nlen: %zu\n", str, start, len);
	ret = ft_substr(str, 10, len);
	if (strcmp(target, ret) == 0)
	{
		printf("--after substr--\n");
		printf("%s\n", ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_len_longer_case(void)
{
	char	*str = "Welcome!! Hello, 42 world!";
	char	*target = "Hello, 42 world!";
	size_t	start = 10;
	size_t	len = SIZE_MAX;
	char	*ret = NULL;

	printf("\n///test3_len_longer_case///\n");
	printf("--before substr--\n");
	printf("str: %s\nstart: %zu\nlen: %zu\n", str, start, len);
	ret = ft_substr(str, 10, len);
	if (strcmp(target, ret) == 0)
	{
		printf("--after substr--\n");
		printf("%s\n", ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_s_null_case(void)
{
	char	*str = NULL;
	size_t	start = 10;
	size_t	len = 10;
	char	*ret = NULL;

	printf("\n///test4_s_null_case///\n");
	printf("--before substr--\n");
	printf("str: %s\nstart: %zu\nlen: %zu\n", str, start, len);
	ret = ft_substr(str, start, len);
	printf("--after substr--\n");
	if (strlen(ret) == 0)
		printf("EMPTY\n");
	return ;
}

void	test5_len_0_case(void)
{
	char	*str = "Hello, 42 world!";
	size_t	start = 10;
	size_t	len = 0;
	char	*ret = NULL;

	printf("\n///test5_len_0_case///\n");
	printf("--before substr--\n");
	printf("str: %s\nstart: %zu\nlen: %zu\n", str, start, len);
	ret = ft_substr(str, start, len);
	printf("--after substr--\n");
	if (strlen(ret) == 0)
		printf("EMPTY\n");
	return ;
}

void	test6_start_longer_than_s_len_case(void)
{
	char	*str = "Hello, 42 world!";
	size_t	start = strlen(str) + 1;
	size_t	len = 10;
	char	*ret = NULL;

	printf("\n///test6_start_longer_than_s_len_case///\n");
	printf("--before substr--\n");
	printf("str: %s\nstart: %zu\nlen: %zu\n", str, start, len);
	ret = ft_substr(str, start, len);
	printf("--after substr--\n");
	if (strlen(ret) == 0)
		printf("EMPTY\n");
	return ;
}
*/
