/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:26:53 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/24 18:33:21 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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

	printf("ascii:\tisalnum\t:\tft_isalnum\n");
	while (i <= 123)
	{
		ori = isalnum(i);
		ft = ft_isalnum(i);
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
		ori = isalnum(c);
		ft = ft_isalnum(c);
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
