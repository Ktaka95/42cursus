/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:58:17 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 14:58:20 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	ret;

	ret = 0;
	if ('0' <= c && c <= '9')
		ret = 1;
	return (ret);
}


#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(void)
{
	int	i = 0;
	int	ori = 0;
	int	ft = 0;

	printf("ascii:\tisalpha\t:\tft_isalpha\n");
	while (i < 128)
	{
		ori = isalpha(i);
		ft = ft_isalpha(i);
		if (ori == ft)
			printf("[%d]:\t%d\t:\t%d\n", i, ori, ft);
		else
		{
			printf("NG :(\n");
			return(0);
		}
		i++;
	}
	return (0);
}

