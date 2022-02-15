/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:02:09 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/13 14:02:13 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int	main(void)
{
	size_t	ori = 0;
	size_t	ft = 0;
	char	*str = calloc(INT_MAX, sizeof(char));
	int		i = 0;
	size_t	pow_ten = 0;

	printf("len:\tstrlen\t:\tft_strlen\n");
	while (i < INT_MAX)
	{
		pow_ten = pow(10, i);
		if (pow_ten > INT_MAX)
			pow_ten = INT_MAX;
		str = memset(str, 'a', pow_ten);
		ori = strlen(str);
		ft = strlen(str);
		if (ori == ft)
			printf("[%zu]:\t%zu\t:\t%zu\n", pow_ten, ori, ft);
		else
		{
			printf("NG :(\n");
			return(0);
		}
		if (pow_ten == INT_MAX)
			break;
		i++;
	}
	printf("OK :)\n");
	//////以下セグフォ///////
	// ori = strlen(NULL);
	// ft = strlen(NULL);
	return (0);
}
*/
