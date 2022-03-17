/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:22:41 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/06 23:22:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*heap;

	if (SIZE_MAX / count < size)
		return (NULL);
	heap = malloc(count * size);
	if (heap == NULL)
		return (NULL);
	else
	{
		ft_bzero(heap, count * size);
		return (heap);
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*ptr1;
	char	*ptr2;
	size_t	count;
	size_t	i = 0;

	count = 10;

	ptr1 = calloc(count, sizeof(char));
	ptr2 = ft_calloc(count, sizeof(char));
	if (ptr1 == NULL)
		printf("calloc: メモリが確保できません\n");
	if (ptr2 == NULL)
	{
		printf("ft_calloc: メモリが確保できません\n");
		return (0);
	}
	while (i < count)
	{
		if (ptr2[i] == 0)
			printf("index %zu: [\\0]\n", i);
		else
		{
			printf("NG :(\n");
			break;
		}
		i++;
	}
	printf("OK :)\n");
	return (0);
}
*/
