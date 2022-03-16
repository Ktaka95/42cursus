/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:43:35 by ktaka             #+#    #+#             */
/*   Updated: 2021/11/12 22:43:37 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		arry1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int		arry2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char	arry3[] = "Hello, world!";
	char	arry4[] = "Hello, world!";
	int	i = 0;

	printf("/////int arry before bzero/////\n");
	printf("index\tnum\n");
	while (i < 10)
	{
		printf("%d:\t%d\n", i, arry1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("/////after bzero/////\n");
	printf("index\tnum\n");
	printf("original_bzero\n");
	bzero(arry1, sizeof(int) * 3);
	while (i < 10)
	{
		printf("%d:\t%d\n", i, arry1[i]);
		i++;
	}
	i = 0;
	printf("\nft_bzero\n");
	bzero(arry2, sizeof(int) * 3);
	while (i < 10)
	{
		printf("%d:\t%d\n", i, arry2[i]);
		i++;
	}
	i = 0;
	int flag = 1;
	while (i < 10)
	{
		if (arry1[i] != arry2[i])
			flag = 0;
		break;
	}
	if (flag == 1)
		printf("OK :)\n\n");
	else
		printf("NG :(\n\n");


	i = 0;

	printf("/////string before bzero/////\n");
	printf("index\tnum\n");
	while (i < 14)
	{
		if (arry3[i] != '\0')
			printf("%d:\t%c\n", i, arry3[i]);
		else
			printf("%d:\t\\0\n", i);
		i++;
	}
	i = 0;
	printf("\n");
	printf("/////after bzero/////\n");
	printf("index\tnum\n");
	printf("original_bzero\n");
	bzero(arry3, sizeof(char) * 3);
	while (i < 14)
	{
		if (arry3[i] != '\0')
			printf("%d:\t%c\n", i, arry3[i]);
		else
			printf("%d:\t\\0\n", i);
		i++;
	}
	i = 0;
	printf("\nft_bzero\n");
	bzero(arry4, sizeof(char) * 3);
	while (i < 14)
	{
		if (arry4[i] != '\0')
			printf("%d:\t%c\n", i, arry4[i]);
		else
			printf("%d:\t\\0\n", i);
		i++;
	}
	i = 0;
	flag = 1;
	while (i < 14)
	{
		if (arry3[i] != arry4[i])
			flag = 0;
		break;
	}
	if (flag == 1)
		printf("OK :)\n");
	else
		printf("NG :(\n");
	return (0);
}
*/
