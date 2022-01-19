/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:26:53 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 15:26:56 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	ret;

	ret = 0;
	if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'))
		ret = 1;
	return (ret);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void)
// {
// 	int	i;
// 	int	j;

	// i = 0;
	// while (i < 128)
	// {
	// 	j = isalnum(i);
	// 	printf("%d %d\n", i, j);
	// 	i++;
	// }
	// i = 2147483647;
	// j = isalnum(i);
	// printf("%d %d\n", i, j);
	// i = -2147483648;
	// j = isalnum(i);
	// printf("%d %d\n", i, j);
	// printf("------------------------------\n");
// 	i = 0;
// 	while (i < 128)
// 	{
// 		j = ft_isalnum(i);
// 		printf("%d %d\n", i, j);
// 		i++;
// 	}
// 	i = 2147483647;
// 	j = ft_isalnum(i);
// 	printf("%d %d\n", i, j);
// 	i = -2147483648;
// 	j = ft_isalnum(i);
// 	printf("%d %d\n", i, j);
// 	return (0);
// }
