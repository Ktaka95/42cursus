/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:42:26 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/24 18:33:57 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int	i = -1;
	int	c = -10000;
	int	ori = 0;
	int	ft = 0;
	printf("ascii:\tisascii\t:\tft_isascii\n");
	while (i <= 128)
	{
		ori =isascii(i);
		ft = ft_isascii(i);
		if (ori == ft)
			printf("[%d]:\t%d\t:\t%d\n", i, ori, ft);
		else
		{
			printf("NG :(\n");
			return(0);
		}
		i++;
	}
	while (c <= 10000)
	{
		ori = isascii(c);
		ft = ft_isascii(c);
		if (ori != ft)
		{
			printf("NG :(\n");
			return(0);
		}
		c++;
	}
	printf("OK :)\n");
	return (0);
}
*/
