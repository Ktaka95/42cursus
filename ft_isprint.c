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
	return ((' ' <= c && c <= '~'));
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int	i = 31;
	int	c = -10000;
	int	ori = 0;
	int	ft = 0;
	printf("ascii:\tisprint\t:\tft_isprint\n");
	while (i <= 127)
	{
		ori = isprint(i);
		ft = ft_isprint(i);
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
		ori = isprint(c);
		ft = ft_isprint(c);
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
