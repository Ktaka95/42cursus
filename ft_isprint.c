/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:06:32 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 16:06:35 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	ret;

	ret = 0;
	if (32 <= c && c <= 126)
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
	// 	j = isprint(i);
	// 	printf("%d %d\n", i, j);
	// 	i++;
	// }
	// i = 2147483647;
	// j = isprint(i);
	// printf("%d %d\n", i, j);
	// i = -2147483648;
	// j = isprint(i);
	// printf("%d %d\n", i, j);
	// printf("------------------------------\n");
// 	i = 0;
// 	while (i < 128)
// 	{
// 		j = ft_isprint(i);
// 		printf("%d %d\n", i, j);
// 		i++;
// 	}
// 	i = 2147483647;
// 	j = ft_isprint(i);
// 	printf("%d %d\n", i, j);
// 	i = -2147483648;
// 	j = ft_isprint(i);
// 	printf("%d %d\n", i, j);
// 	return (0);
// }
