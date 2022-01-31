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

static char	*ft_top_trim(char const *s1, char const *set);

static char	*ft_end_trim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*top_trimed;
	char	*end_trimed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	else if (ft_strlen(s1) == 0)
		return ((char *)s1);
	top_trimed = ft_top_trim(s1, set);
	if (top_trimed == NULL)
		return (NULL);
	else if (ft_strlen(top_trimed) == 0)
		return (top_trimed);
	else
		end_trimed = ft_end_trim(top_trimed, set);
	return (end_trimed);
}

char	*ft_top_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	cnt;
	char	*ret;

	i = 0;
	cnt = 0;
	while (i < ft_strlen(s1))
	{
		if (ft_strchr(set, s1[i]) != NULL)
			cnt++;
		else
			break ;
		i++;
	}
	ret = ft_calloc(ft_strlen(s1) - cnt + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	cnt = 0;
	while (s1[i] != '\0')
	{
		ret[cnt] = s1[i];
		i++;
		cnt++;
	}
	return (ret);
}

char	*ft_end_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	cnt;
	size_t	alloc_len;
	char	*ret;

	i = 0;
	j = 0;
	cnt = 0;
	alloc_len = 0;
	while (s1[i] != '\0')
		i++;
	i--;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		i--;
		cnt++;
	}
	alloc_len = ft_strlen(s1) - cnt + 1;
	ret = ft_calloc(alloc_len, sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, alloc_len);
	return (ret);
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
// 	char	*s1 = "ABC";
// 	char	*s2 = NULL;
// 	char	*ret;

// 	ret = ft_strtrim(s1, s2);
// 	if (ret == NULL)
// 		printf("null\n");
// 	else
// 		printf("%s\n", ret);
// // 	printf("-----------------\n");
// // 	// int	ret = 0;
// // 	// ret = ft_strncmp(ret1, s2, 100);
// // 	// printf("%d\n", ret);
// // 	// i = ft_top_trim(s1, " \n\t");
// // 	// j = ft_top_trim(s2, " \n\t");
// // 	// while (*s1 != '\0')
// // 	// 	s1++;
// // 	// s1--;
// // 	// while (*s2 != '\0')
// // 	// 	s2++;
// // 	// s2--;
// // 	// k = ft_end_trim(s1, " \n\t");
// // 	// l = ft_end_trim(s2, " \n\t");
// // 	// printf("%zu, %zu, %zu, %zu\n", i, j, k, l);

// 	return (0);
// }
