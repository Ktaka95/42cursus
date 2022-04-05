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

static char		**ft_split_free(char **ret, size_t n);

char	**ft_split(char const *s, char c)
{
	char			**ret;
	size_t			i;
	size_t			j;
	unsigned int	start;

	ret = ft_calloc((ft_split_count(s, c) + 1), sizeof(char *));
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
		{
			ret[j] = ft_substr(s, start, i - start);
			if (ret[j] == NULL)
				return (ft_split_free(ret, j));
			j++;
		}
	}
	ret[j] = NULL;
	return (ret);
}

size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	count;

	i = 0;
	len = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (len > 0)
				count++;
			len = 0;
		}
		else
			len++;
		i++;
	}
	if (len > 0)
		count++;
	return (count);
}

char	**ft_split_free(char **ret, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ret[i] != NULL)
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
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
	return (0);
}
void	test1_normal_case(void)
{
	char	**ret = NULL;
	char	*str = " Hello, 42 world ! ";
	char	c = ' ';
	size_t	i = 0;
	printf("///test1_normal_case///\n");
	ret = ft_split(str, c);
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
	ret = ft_split(str, c);
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
	ret = ft_split(str, c);
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
	ret = ft_split(str, c);
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
	ret = ft_split(str, c);
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
	ret = ft_split(str, c);
	while (ret[i] != NULL)
	{
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
	ret = ft_split(str, c);
	while (ret[i] != NULL)
	{
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
	ret = ft_split(str, c);
	while (ret[i] != NULL)
	{
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
	ret = ft_split(str, c);
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
	ret = ft_split(str, c);
	while (ret[i] != NULL)
	{
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
	ret = ft_split(str, c);
	while (ret[i] != NULL)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return ;
}
*/
