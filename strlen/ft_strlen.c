/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:02:09 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/13 14:02:13 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char	*s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int	len;
// 	int	ft_len;
// 	char	s[] = "";

// 	len = strlen(s);
// 	ft_len = ft_strlen(s);

// 	printf("Expected_Output\n");
// 	printf("\"%s\" is %d 文字\n", s, len);
// 	printf("\"%s\" is %lu 文字\n", "hello world", strlen("hello world"));

// 	printf("----------------------\n");

// 	printf("Actual_Output\n");
// 	printf("\"%s\" is %d 文字\n", s, ft_len);
// 	printf("\"%s\" is %zu 文字\n", "hello world", ft_strlen("hello world"));

// 	return 0;
// }
