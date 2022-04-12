/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:12:05 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:12:06 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_count(char const *s, char c);

static char		**allocate_count_and_free(char **str, size_t split_count);

char	**ft_split(char const *s, char c)
{
	char			**ret;
	size_t			i;
	size_t			j;
	unsigned int	start;

	if (s == NULL)
		return (NULL);
	ret = (char **)malloc((ft_split_count(s, c) + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_split_count(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
			ret[j++] = ft_substr(s, start, i - start);
	}
	ret[j] = NULL;
	return (allocate_count_and_free(ret, ft_split_count(s, c)));
}

size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	split_count;

	i = 0;
	len = 0;
	split_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			len++;
		else
		{
			if (len > 0)
				split_count++;
			len = 0;
		}
		i++;
	}
	if (len > 0)
		split_count++;
	return (split_count);
}

char	**allocate_count_and_free(char **str, size_t split_count)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != NULL)
	{
		i++;
		count++;
	}
	if (count != split_count)
	{
		while (j < split_count + 1)
		{
			free(str[j]);
			j++;
		}
		free(str);
		return (NULL);
	}
	return (str);
}

/*
#include <stdio.h>

void	test1_normal_case(void);
void	test2_nosplit_case(void);
void	test3_c_0_case(void);
void	test4_s_include_0_case(void);
void	test5_s_include_0_c_0_case(void);
void	test6_s_start_0_case(void);
void	test7_s_start_0_c_0_case(void);
void	test8_s_empty_case(void);
void	test9_s_empty_c_null_case(void);
void	test10_s_null_case(void);
void	test11_s_null_c_0_case(void);
void	test12_only_0_case(void);

int	main(void)
{
	test1_normal_case();
	test2_nosplit_case();
	test3_c_0_case();
	test4_s_include_0_case();
	test5_s_include_0_c_0_case();
	test6_s_start_0_case();
	test7_s_start_0_c_0_case();
	test8_s_empty_case();
	test9_s_empty_c_null_case();
	test10_s_null_case();
	test11_s_null_c_0_case();
	test12_only_0_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	**ret = NULL;
	char	*str = "   Hello,   42    world  !   ";
	char	c = ' ';
	size_t	i = 0;
	printf("///test1_normal_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	while (ret[i] != NULL)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test2_nosplit_case(void)
{
	char	**ret = NULL;
	char	*str = "Hello, 42 world!";
	char	c = 'A';
	size_t	i = 0;
	printf("\n///test2_nosplit_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	while (ret[i] != NULL)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test3_c_0_case(void)
{
	char	**ret = NULL;
	char	*str = "Hello, 42 world!";
	char	c = '\0';
	size_t	i = 0;
	printf("\n///test3_c_0_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	while (ret[i] != NULL)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test4_s_include_0_case(void)
{
	char	**ret = NULL;
	char	*str = " Hello, \0 42 world ! ";
	char	c = ' ';
	size_t	i = 0;
	printf("\n///test4_s_include_0_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	while (ret[i] != NULL)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test5_s_include_0_c_0_case(void)
{
	char	**ret = NULL;
	char	*str = " Hello, \0 42 world ! ";
	char	c = '\0';
	size_t	i = 0;
	printf("\n///test5_s_include_0_c_0_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	while (ret[i] != NULL)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test6_s_start_0_case(void)
{
	char	**ret = NULL;
	char	*str = "\0 Hello, 42 world ! ";
	char	c = ' ';
	size_t	i = 0;
	printf("\n///test6_s_start_0_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	if (ret[0] == NULL)
	{
		printf("ret[0] == NULL\n");
		return ;
	}
	while (ret[i] != NULL)
	{
		printf("ret[0] != NULL\n");
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test7_s_start_0_c_0_case(void)
{
	char	**ret = NULL;
	char	*str = "\0 Hello, 42 world ! ";
	char	c = '\0';
	size_t	i = 0;
	printf("\n///test7_s_start_0_c_0_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	if (ret[0] == NULL)
	{
		printf("ret[0] == NULL\n");
		return ;
	}
	while (ret[i] != NULL)
	{
		printf("ret[0] != NULL\n");
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test8_s_empty_case(void)
{
	char	**ret = NULL;
	char	*str = "";
	char	c = 'A';
	size_t	i = 0;
	printf("\n///test8_s_empty_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	if (ret[0] == NULL)
	{
		printf("ret[0] == NULL\n");
		return ;
	}
	while (ret[i] != NULL)
	{
		printf("ret[0] != NULL\n");
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test9_s_empty_c_null_case(void)
{
	char	**ret = NULL;
	char	*str = "";
	char	c = '\0';
	size_t	i = 0;
	printf("\n///test9_s_empty_c_null_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	if (ret[0] == NULL)
	{
		printf("ret[0] == NULL\n");
		return ;
	}
	while (ret[i] != NULL)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test10_s_null_case(void)
{
	char	**ret = NULL;
	char	*str = "NULL";
	char	c = 'A';
	size_t	i = 0;
	printf("\n///test10_s_null_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	if (ret[0] == NULL)
	{
		printf("ret[0] == NULL\n");
		return ;
	}
	while (ret[i] != NULL)
	{
		printf("ret[0] != NULL\n");
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test11_s_null_c_0_case(void)
{
	char	**ret = NULL;
	char	*str = "NULL";
	char	c = '\0';
	size_t	i = 0;
	printf("\n///test11_s_null_c_0_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	while (ret[i] != NULL)
	{
		printf("ret[0] != NULL\n");
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}

void	test12_only_0_case(void)
{
	char	**ret = NULL;
	char	*str = "\0\0\0\0\0\0\0\0\0\0";
	char	c = '\0';
	size_t	i = 0;
	printf("\n///test12_only_0_case///\n");
	printf("--before split--\n");
	printf("str: %s\nc: %c\n", str, c);
	ret = ft_split(str, c);
	printf("--after split--\n");
	if (ret[0] == NULL)
	{
		printf("ret[0] == NULL\n");
		return ;
	}
	while (ret[i] != NULL)
	{
		printf("ret[0] != NULL\n");
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}
*/
