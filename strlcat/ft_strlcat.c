/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:27:40 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/05 22:27:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>

// size_t	ft_strlcat(char* restrict dst, const char* restrict src, size_t dstsize)
// {

// }

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i;
	int	j;
	char s1[4] = {'-', '-', '-', '-'};
	j = strlcat(s1, "abc", 0);

	i = 0;
	while (s1[i])
	{
		printf("%c", s1[i]);
		i++;
	}
	printf ("\n");
	printf ("%c", s1[3]);
	printf ("\n");
	printf ("%c", s1[0]);
	printf ("\n");
	printf ("%d\n", j);

	// char s11[4] = {'-', '-', '-', '-'};
	// j = ft_strlcat(s11, "abc", 0);

	// i = 0;
	// while (s11[i])
	// {
	// 	printf("%c", s11[i]);
	// 	i++;
	// }
	// printf ("\n");
	// printf ("%c", s11[2]);
	// printf ("\n");
	// printf ("%c", s11[0]);
	// printf ("\n");
	// printf ("%d\n", j);

	printf ("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

	char s0[4] = {'-', '-', '-', '-'};
	j = strlcat(s0, "abcdefg", 0);

	i = 0;
	while (s0[i])
	{
		printf("%c", s0[i]);
		i++;
	}
	printf ("\n");
	printf ("%c", s0[3]);
	printf ("\n");
	printf ("%c", s0[0]);
	printf ("\n");
	printf ("%d\n", j);

	// char s22[4] = {'-', '-', '-', '-'};
	// j = ft_strlcat(s22, "abcdefg", 0);

	// i = 0;
	// while (s22[i])
	// {
	// 	printf("%c", s22[i]);
	// 	i++;
	// }
	// printf ("\n");
	// printf ("%c", s22[2]);
	// printf ("\n");
	// printf ("%c", s22[0]);
	// printf ("\n");
	// printf ("%d\n", j);

	return (0);
}
