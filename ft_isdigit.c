/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:58:17 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/24 18:34:17 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int	i = 47;
	int	c = -10000;
	int	ori = 0;
	int	ft = 0;
	printf("ascii:\tisdigit\t:\tft_isdigit\n");
	while (i <= 58)
	{
		ori = isdigit(i);
		ft = ft_isdigit(i);
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
		ori = isdigit(c);
		ft = ft_isdigit(c);
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
