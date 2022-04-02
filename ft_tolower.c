/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:46 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/04 15:28:51 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = -128;

	while (c < 257)
	{
		if (tolower(c) != ft_tolower(c))
		{
			printf("NG :(\n");
			exit (0);
		}
		else
			printf("ascii %d: %c => %c\tOK\n", c, (char)c, (char)(ft_tolower(c)));
		c++;
	}
	printf("OK :)\n");
}
*/
