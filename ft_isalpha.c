/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:34:49 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/04 15:34:52 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	ret;

	ret = 0;
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		ret = 1;
	return (ret);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
// 	int	i;
// 	int	j;

	// i = 0;
	// while (i < 128)
	// {
	// 	j = isalpha(i);
	// 	printf("%d %d\n", i, j);
	// 	i++;
	// }
	// i = 2147483647;
	// j = isalpha(i);
	// printf("%d %d\n", i, j);
	// i = -2147483648;
	// j = isalpha(i);
	// printf("%d %d\n", i, j);
	// printf("------------------------------\n");
// 	i = 0;
// 	while (i < 128)
// 	{
// 		j = ft_isalpha(i);
// 		printf("%d %d\n", i, j);
// 		i++;
// 	}
// 	i = 2147483647;
// 	j = ft_isalpha(i);
// 	printf("%d %d\n", i, j);
// 	i = -2147483648;
// 	j = ft_isalpha(i);
// 	printf("%d %d\n", i, j);
// 	return (0);
// }
