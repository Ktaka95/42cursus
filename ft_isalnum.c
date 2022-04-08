/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:26:53 by ktaka             #+#    #+#             */
/*   Updated: 2022/02/16 00:46:40 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	ret;

	ret = 0;
	if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'))
		ret = 1;
	return (ret);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int	i = -256;
	int	ori = 0;
	int	ft = 0;

	printf("ascii:\tisalnum\t:\tft_isalnum\n");
	while (i < 257)
	{
		ori = isalnum(i);
		ft = ft_isalnum(i);
		if (ori == ft)
			printf("[%d]:\t%d\t:\t%d\n", i, ori, ft);
		else
		{
			printf("NG :(\n");
			return(0);
		}
		i++;
	}
	printf("OK :)\n");
	return (0);
}
*/
