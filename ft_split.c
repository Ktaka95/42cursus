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

// static size_t	ft_split_start(char const *s, char c);

// static size_t	ft_split_end(char const *s, char c, size_t n);

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	start;
// 	size_t	end;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] == c)
// 			i++;
// 		start = i;
// 		while (s[i] != c)
// 			i++;
// 		end = i - 1;
// 	}

// }

// size_t	ft_split_start(char const *s, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	if (s[i] != c)
// 		i++;
// 	return (i);
// }

// size_t	ft_split_end(char const *s, char c, size_t n)
// {
// 	size_t	i;

// 	i = n;
// 	if (s[n] != c)
// 		i++;
// 	return (i);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char	s1[] = "bAAbbbBBBbbbbbCCCbDbbbEb";
// 	size_t	ret = 0;

// 	ret = ft_split_cnt(s1, 'b');
// 	printf("%zu\n", ret);
// 	return (0);
// }
