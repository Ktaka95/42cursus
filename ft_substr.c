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

	i = 0;
	if (s == NULL || len < 1 || start > ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		substr = ft_calloc(len + 1, sizeof(char));
		if (substr == NULL)
			return (NULL);
		else
		{
			while (i < len && s[start] != '\0')
			{
				substr[i] = s[start];
				i++;
				start++;
			}
		}
		return (substr);
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	char	*main_s = NULL;
// 	char	*sub_s = NULL;
// 	// int		i = 0;
// 	sub_s = ft_substr(main_s, 0, 12);
// 	// while (sub_s[i] != '\0')
// 	// {
// 	// 	printf("%d: [%c]\n", i, sub_s[i]);
// 	// 	i++;
// 	// }
// 	// printf("%d: [%c]\n", i, sub_s[i]);
// 	printf("%s\n", sub_s);
// 	return(0);
// }
