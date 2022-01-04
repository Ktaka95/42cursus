/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:01:53 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/13 14:01:56 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char	*str);

int	main(void)
{
	int	len;
	int	ft_len;
	char	s[] = "";

	len = strlen(s);
	ft_len = ft_strlen(s);

	printf("Expected_Output\n");
	printf("\"%s\" は %d 文字\n", s, len);
	printf("\"%s\" は %lu 文字\n", "hello world", strlen("hello world"));

	printf("----------------------\n");

	printf("Actual_Output\n");
	printf("\"%s\" は %d 文字\n", s, ft_len);
	printf("\"%s\" は %d 文字\n", "hello world", ft_strlen("hello world"));

	return 0;
}
