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
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int	i = 64;
	int	c = -10000;
	int	ori = 0;
	int	ft = 0;
	printf("ascii:\tisalpha\t:\tft_isalpha\n");
	while (i <= 123)
	{
		ori = isalpha(i);
		ft = ft_isalpha(i);
		if (ori == ft)
			printf("[%c]:\t%d\t:\t%d\n", i, ori, ft);
		else
		{
			printf("NG :(\n");
			return(0);
		}
		i++;
	}
	while (c <= 10000)
	{
		ori = isalpha(c);
		ft = ft_isalpha(c);
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
