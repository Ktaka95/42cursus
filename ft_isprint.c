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
	int	ret;

	ret = 0;
	if (32 <= c && c <= 126)
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

	printf("ascii:\tisprint\t:\tft_isprint\n");
	while (i < 257)
	{
		ori = isprint(i);
		ft = ft_isprint(i);
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
