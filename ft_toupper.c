/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:46 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/04 15:30:01 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
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
		if (toupper(c) != ft_toupper(c))
		{
			printf("NG :(\n");
			exit (0);
		}
		else
			printf("ascii %d: %c => %c\tOK\n", c, (char)c, (char)(ft_toupper(c)));
		c++;
	}
	printf("OK :)\n");
}
*/
