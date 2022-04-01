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
			ret[j++] = ft_substr(s, start, i - start);
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

// #include <stdio.h>

// int main(void)
// {
// 	char	s1[] = "split  ||this|for|me||||!|";
// 	char**	ret = NULL;
// 	size_t	i = 0;

// 	ret = ft_split(s1, '|');
// 	while (ret[i] != '\0')
// 	{
// 		printf("%s\n", ret[i]);
// 		i++;
// 	}
// 	return (0);
// }
