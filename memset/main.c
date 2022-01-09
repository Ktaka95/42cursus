/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:57:11 by ktaka             #+#    #+#             */
/*   Updated: 2021/11/10 18:57:21 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	int		s1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char	s2[] = "ABCDEFG";
	int		s3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char	s4[] = "ABCDEFG";
	int	i;

	memset(s1 + 2, 1, 5);
	ft_memset(s2 + 2, '1', 5);
	memset(s3 + 2, 1, 5);
	ft_memset(s4 + 2, '1', 5);
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
