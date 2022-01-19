/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:42:26 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 15:42:27 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	ret;

	ret = 0;
	if (0 <= c && c <= 128)
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
	// 	j = isascii(i);
	// 	printf("%d %d\n", i, j);
	// 	i++;
	// }
	// i = 2147483647;
	// j = isascii(i);
	// printf("%d %d\n", i, j);
	// i = -2147483648;
	// j = isascii(i);
	// printf("%d %d\n", i, j);
	// printf("------------------------------\n");
// 	i = 0;
// 	while (i < 128)
// 	{
// 		j = ft_isascii(i);
// 		printf("%d %d\n", i, j);
// 		i++;
// 	}
// 	i = 2147483647;
// 	j = ft_isascii(i);
// 	printf("%d %d\n", i, j);
// 	i = -2147483648;
// 	j = ft_isascii(i);
// 	printf("%d %d\n", i, j);
// 	return (0);
// }
