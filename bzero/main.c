/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:49:29 by ktaka             #+#    #+#             */
/*   Updated: 2021/11/12 22:49:31 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, int n);

int	main(void)
{
	int	i;

	int	s1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char	s2[] = "ABCDEFGHIJK";
	int	s3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char	s4[] = "ABCDEFGHIJK";

	bzero(s1, 1);
	bzero(s2, 1);
	ft_bzero(s3, 1);
	ft_bzero(s4, 1);

	printf("Expected_Output\n");
	for (i = 0; i < 10; i++)
		printf("%d, ", s1[i]);
	printf("%s\n", s2);
	printf("---------------\n");
	printf("Actual_Output\n");
	for (i = 0; i < 10; i++)
		printf("%d, ", s3[i]);
	printf("%s\n", s4);
	return (0);
}
