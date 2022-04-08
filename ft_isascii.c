/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:42:26 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 15:42:27 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	ret;

	ret = 0;
	if (0 <= c && c <= 127)
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

	printf("ascii:\tisascii\t:\tft_isascii\n");
	while (i < 257)
	{
		ori = isascii(i);
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
	printf("OK :)\n");
	return (0);
}
*/
