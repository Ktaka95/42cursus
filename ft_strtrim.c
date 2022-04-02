/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:11:57 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:11:58 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_start_trim_count(char *s1, char const *set);

static size_t	ft_end_trim_count(char *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;

	ret = (char *)s1;
	if (ret == NULL || set == NULL)
		return (NULL);
	else if (ft_strlen(ret) == 0)
		return (ret);
	start = ft_start_trim_count(ret, set);
	end = ft_end_trim_count(ret, set);
	ret = ft_substr(ret, start, ft_strlen(ret) - start - end);
	return (ret);
}

size_t	ft_start_trim_count(char *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) != NULL)
			count++;
		else
			break ;
		i++;
	}
	return (count);
}

size_t	ft_end_trim_count(char *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		i--;
		count++;
	}
	return (count);
}

// #include <stdio.h>

// int main(void)
// {
// // 	// char	s1[] = "ABCDECFCFGF";
// // 	// char	*s2 = NULL;
// // 	// size_t	i;
// // 	// size_t	i = 0;
// // 	// size_t	j = 0;
// // 	// size_t	k = 0;
// // 	// size_t	l = 0;

// // 	// s2 = ft_strtrim(s1, "CF");
// // 	// i = 0;
// // 	// while (s2[i] != '\0')
// // 	// {
// // 	// 	if (s2[i] != '\0')
// // 	// 		printf("%zu: [%c]\n", i, s2[i]);
// // 	// 	else if (s2[i] == '\0')
// // 	// 		printf("%zu: ['\\0']\n", i);
// // 	// 	i++;
// // 	// }
// // 	// if (s2[i] != '\0')
// // 	// 	printf("%zu: [%c]\n", i, s2[i]);
// // 	// else if (s2[i] == '\0')
// // 	// 	printf("%zu: ['\\0']\n", i);
// // 	// char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// // 	// char	*s2 = "Hello \t  Please\n Trim me !";
// 	char	*s1 = "aabcABCDEFGaabccaacbca";
// 	char	*s2 = "abc";
// 	char	*ret;
// 	size_t	start;
// 	size_t	end;

// 	start = ft_start_trim_count(s1, s2);
// 	end = ft_end_trim_count(s1, s2);
// 	ret = ft_strtrim(s1, s2);
// 	if (ret == NULL)
// 		printf("null\n");
// 	else
// 		printf("%zu, %zu, %s\n", start, end, ret);
// // 	printf("-----------------\n");
// // 	// int	ret = 0;
// // 	// ret = ft_strncmp(ret1, s2, 100);
// // 	// printf("%d\n", ret);
// // 	// i = ft_start_trim_count(s1, " \n\t");
// // 	// j = ft_start_trim_count(s2, " \n\t");
// // 	// while (*s1 != '\0')
// // 	// 	s1++;
// // 	// s1--;
// // 	// while (*s2 != '\0')
// // 	// 	s2++;
// // 	// s2--;
// // 	// k = ft_end_trim_count(s1, " \n\t");
// // 	// l = ft_end_trim_count(s2, " \n\t");
// // 	// printf("%zu, %zu, %zu, %zu\n", i, j, k, l);

// 	return (0);
// }
