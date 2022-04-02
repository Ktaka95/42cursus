/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:11:33 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:11:34 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	alloc_len;

	i = 0;
	if (s == NULL || len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		if (len > ft_strlen(s))
			alloc_len = ft_strlen(s) - start + 1;
		else
			alloc_len = len + 1;
		substr = ft_calloc(alloc_len, sizeof(char));
		if (substr == NULL)
			return (NULL);
		else
		{
			while (i < len && s[start] != '\0')
				substr[i++] = s[start++];
		}
		return (substr);
	}
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// char	*main_s = "abcdef";
// 	// char	*sub_s = NULL;
// 	// int		i = 0;
// 	// sub_s = ft_substr(main_s, 0, 5);
// 	// while (sub_s[i] != '\0')
// 	// {
// 	// 	printf("%d: [%c]\n", i, sub_s[i]);
// 	// 	i++;
// 	// }
// 	// printf("%d: [%c]\n", i, sub_s[i]);
// 	// printf("%s\n", sub_s);
// 	char * ft_s = ft_substr("tripouille", 0, 42000);
// 	printf("%s\n", ft_s);
// 	char * mcheck = malloc(strlen("tripouille" + 1));
// 	printf("%s\n", mcheck);
// 	return (0);
// }
