/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:58:17 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 14:58:20 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	ret;

	ret = 0;
	if ('0' <= c && c <= '9')
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
	// 	j = isdigit(i);
	// 	printf("%d %d\n", i, j);
	// 	i++;
	// }
	// i = 2147483647;
	// j = isdigit(i);
	// printf("%d %d\n", i, j);
	// i = -2147483648;
	// j = isdigit(i);
	// printf("%d %d\n", i, j);
	// printf("------------------------------\n");
// 	i = 0;
// 	while (i < 128)
// 	{
// 		j = ft_isdigit(i);
// 		printf("%d %d\n", i, j);
// 		i++;
// 	}
// 	i = 2147483647;
// 	j = ft_isdigit(i);
// 	printf("%d %d\n", i, j);
// 	i = -2147483648;
// 	j = ft_isdigit(i);
// 	printf("%d %d\n", i, j);
// 	return (0);
// }
