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

// #include "libft.h"

// // static char	*ft_chartrim(char const *s1, char set);

// // static size_t	ft_topcnt(char const *s1, char const *set);

// // static size_t	ft_endcnt(char const *s1, char const *set);

// // char	*ft_strtrim(char const *s1, char const *set)
// // {
// // 	size_t	i;
// // 	char	*trimed_str;

// // 	i = 0;
// // 	while (set[i] != '\0')
// // 	{
// // 		s1 = ft_chartrim(s1, set[i]);
// // 		i++;
// // 	}
// // 	trimed_str = ft_strdup(s1);
// // 	return (trimed_str);
// // }

// // char	*ft_chartrim(char const *s1, char set)
// // {
// // 	size_t	i;
// // 	size_t	j;
// // 	size_t	cnt;
// // 	char	*heap;

// // 	i = 0;
// // 	j = 0;
// // 	cnt = ft_allocsizecnt(s1, set);
// // 	heap = ft_calloc(ft_strlen(s1) - cnt + 1, sizeof(char));
// // 	while (s1[i] != '\0')
// // 	{
// // 		if (s1[i] != set)
// // 		{
// // 			heap[j] = s1[i];
// // 			i++;
// // 			j++;
// // 		}
// // 		else if (s1[i] == set)
// // 			i++;
// // 	}
// // 	return (heap);
// // }

// static size_t	ft_topcnt(char const *s1, char const *set)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	cnt;

// 	i = 0;
// 	j = 0;
// 	cnt = 0;
// 	while (set[i] != '\0')
// 	{
// 		while (s1[j] == set[i])
// 		{
// 			j++;
// 			cnt++;
// 		}
// 		i++;
// 		j = 0;
// 	}
// 	return (cnt);
// }

// // static size_t	ft_endcnt(char const *s1, char const *set)
// // {

// // }

// #include <stdio.h>

// int main(void)
// {
// 	// char	s1[] = "ABCDECFCFGF";
// 	// char	*s2 = NULL;
// 	// size_t	i;
// 	size_t	j = 0;
// 	size_t	k = 0;

// 	// s2 = ft_strtrim(s1, "CF");
// 	// i = 0;
// 	// while (s2[i] != '\0')
// 	// {
// 	// 	if (s2[i] != '\0')
// 	// 		printf("%zu: [%c]\n", i, s2[i]);
// 	// 	else if (s2[i] == '\0')
// 	// 		printf("%zu: ['\\0']\n", i);
// 	// 	i++;
// 	// }
// 	// if (s2[i] != '\0')
// 	// 	printf("%zu: [%c]\n", i, s2[i]);
// 	// else if (s2[i] == '\0')
// 	// 	printf("%zu: ['\\0']\n", i);
// 	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 	char	*s2 = "Hello \t  Please\n Trim me !";

// 	// char	*ret1 = ft_strtrim(s1, " \n\t");
// 	// char	*ret2 = ft_strtrim(s2, " \n\t");
// 	// printf("%s\n", ret1);
// 	// printf("-----------------\n");
// 	// printf("%s\n", ret2);
// 	j = ft_topcnt(s1, " \n\t");
// 	k = ft_topcnt(s2, " \n\t");
// 	printf("%zu, %zu\n", j, k);
// 	return (0);
// }
