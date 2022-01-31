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

// static size_t	ft_split_cnt(char const *s, char c);

// char	**ft_split(char const *s, char c)
// {
// }

// size_t	ft_split_cnt(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	split_cnt;
// 	char	*trim_s;

// 	i = 0;
// 	split_cnt = 1;
// 	trim_s = &c;
// 	trim_s = ft_strtrim(s, trim_s);
// 	while (trim_s[i] != '\0')
// 	{
// 		if (trim_s[i] == c)
// 		{
// 			while (trim_s[i] == c)
// 				i++;
// 			split_cnt += 1;
// 		}
// 		i++;
// 	}
// 	return (split_cnt);
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
