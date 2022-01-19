/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:46 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/04 15:28:51 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void)
// {
// 	int c1;
// 	int c11;
// 	c1 = tolower('A');
// 	c11 = ft_tolower('A');
// 	printf("Aを小文字に変換→%c\n",c1);
// 	printf("Aを小文字に変換→%c\n",c1);

// 	int c2;
// 	int c22;
// 	c2 = tolower('a');
// 	c22 = ft_tolower('a');
// 	printf("aを小文字に変換→%c\n",c2);
// 	printf("aを小文字に変換→%c\n",c22);

// 	int c3;
// 	int c33;
// 	c3 = tolower('1');
// 	c33 = ft_tolower('1');
// 	printf("1を小文字に変換→%c\n",c3);
// 	printf("1を小文字に変換→%c\n",c33);
// 	return 0;
// }
