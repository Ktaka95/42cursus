/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:10:37 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:10:37 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*joined_str;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	joined_str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joined_str[i] = s2[j];
		i++;
		j++;
	}
	return (joined_str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	s1[] = "ABCDEFG";
// 	char	*s2 = NULL;
// 	char	*s3 = NULL;
// 	// size_t	i = 0;

// 	s3 = ft_strjoin(s1, s2);
// 	printf("%s\n", s3);
// 	// while (s3[i] != '\0')
// 	// {
// 	// 	printf("%zu: [%c]\n", i, s3[i]);
// 	// 	i++;
// 	// }
// 	// printf("%zu: [%c]\n", i, s3[i]);
// 	return (0);
// }
