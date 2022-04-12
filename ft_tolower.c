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

/* #include <stdio.h> */
/* #include <ctype.h> */
/* #include <stdlib.h> */

/* int	main(void) */
/* { */
/* 	int	c = 64; */
/* 	int	i = -10000; */

/* 	while (c < 92) */
/* 	{ */
/* 		if (tolower(c) != ft_tolower(c)) */
/* 		{ */
/* 			printf("NG :(\n"); */
/* 			exit (0); */
/* 		} */
/* 		else */
/* 			printf("ascii %d: %c => %c\tOK\n", \ */
/* 					c, (char)c, (char)(ft_tolower(c))); */
/* 		c++; */
/* 	} */
/* 	while (i <= 10000) */
/* 	{ */
/* 		if (tolower(i) != ft_tolower(i)) */
/* 		{ */
/* 			printf("NG :(\n"); */
/* 			exit (0); */
/* 		} */
/* 		i++; */
/* 	} */
/* 	printf("OK :)\n"); */
/* } */
