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

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>


int	main(void)
{
	int	len;
	int	ft_len;
	char	s[] = "";

	len = strlen(s);
	ft_len = ft_strlen(s);

	printf("Expected_Output\n");
	printf("\"%s\" is %d characters\n", s, len);
	printf("\"%s\" is %lu characters\n", "hello world", strlen("hello world"));

	printf("----------------------\n");

	printf("Actual_Output\n");
	printf("\"%s\" is %d characters\n", s, ft_len);
	printf("\"%s\" is %d characters\n", "hello world", ft_strlen("hello world"));

	return 0;
}
*/
