/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:46 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/04 15:30:01 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c1;
	int c11;
	c1 = toupper('A');
	c11 = ft_toupper('A');
	printf("Aを大文字に変換→%c\n",c1);
	printf("Aを大文字に変換→%c\n",c1);

	int c2;
	int c22;
	c2 = toupper('a');
	c22 = ft_toupper('a');
	printf("aを大文字に変換→%c\n",c2);
	printf("aを大文字に変換→%c\n",c22);

	int c3;
	int c33;
	c3 = toupper('1');
	c33 = ft_toupper('1');
	printf("1を大文字に変換→%c\n",c3);
	printf("1を大文字に変換→%c\n",c33);
	return 0;
}
