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

	if ((count != 0 && SIZE_MAX / count < size)
		|| (size != 0 && SIZE_MAX / size < count))
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
#include <string.h>

void	test1_normal_case(void);
void	test2_cannot_allocate_case(void);
void	test3_over_SIZEMAX_case(void);
void	test4_count_0_case(void);
void	test5_size_0_case(void);
void	test6_count_and_size_0_case(void);

int	main(void)
{
	test1_normal_case();
	test2_cannot_allocate_case();
	test3_over_SIZEMAX_case();
	test4_count_0_case();
	test5_size_0_case();
	test6_count_and_size_0_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	*test = "";
	char	*test2 = "";
	size_t	count = 100;
	size_t	size = sizeof(int);

	printf("///test1_normal_case///\n");
	test = calloc(count, size);
	test2 = ft_calloc(count, size);
	if (test == NULL)
	{
		printf("calloc: Could not allocate\n");
		if (test2 == NULL)
		{
			printf("ft_calloc: Could not allocate\n");
			printf("OK :)\n");
			return ;
		}
		else
		{
			printf("NG :(\n");
			exit (0);
		}
	}
	else
	{
		if (strcmp(test, test2) != 0)
		{
			printf("NG :(\n");
			exit (0);
		}
		else
		{
			printf("calloc == ft_calloc\n");
			printf("OK :)\n");
		}
	}
	return ;
}

void	test2_cannot_allocate_case(void)
{
	char	*test = "";
	char	*test2 = "";
	size_t	count = SIZE_MAX;
	size_t	size = sizeof(char);

	printf("\n///test2_cannot_allocate_case///\n");
	test = calloc(count, size);
	test2 = ft_calloc(count, size);
	if (test == NULL)
	{
		printf("calloc: Could not allocate\n");
		if (test2 == NULL)
		{
			printf("ft_calloc: Could not allocate\n");
			printf("OK :)\n");
			return ;
		}
		else
		{
			printf("NG :(\n");
			exit (0);
		}
	}
	else
	{
		if (strcmp(test, test2) != 0)
		{
			printf("NG :(\n");
			exit (0);
		}
		else
		{
			printf("calloc == ft_calloc\n");
			printf("OK :)\n");
		}
	}
	return ;
}

void	test3_over_SIZEMAX_case(void)
{
	char	*test = "";
	char	*test2 = "";
	size_t	count = SIZE_MAX;
	size_t	size = SIZE_MAX;

	printf("\n///test3_over_SIZEMAX_case///\n");
	test = calloc(count, size);
	test2 = ft_calloc(count, size);
	if (test == NULL)
	{
		printf("calloc: Could not allocate\n");
		if (test2 == NULL)
		{
			printf("ft_calloc: Could not allocate\n");
			printf("OK :)\n");
			return ;
		}
		else
		{
			printf("NG :(\n");
			exit (0);
		}
	}
	else
	{
		if (strcmp(test, test2) != 0)
		{
			printf("NG :(\n");
			exit (0);
		}
		else
		{
			printf("calloc == ft_calloc\n");
			printf("OK :)\n");
		}
	}
	return ;
}

void	test4_count_0_case(void)
{
	char	*test = "";
	char	*test2 = "";
	size_t	count = 0;
	size_t	size = SIZE_MAX;

	printf("\n///test4_count_0_case///\n");
	test = calloc(count, size);
	test2 = ft_calloc(count, size);
	if (test == NULL)
	{
		printf("calloc: Could not allocate\n");
		if (test2 == NULL)
		{
			printf("ft_calloc: Could not allocate\n");
			printf("OK :)\n");
			return ;
		}
		else
		{
			printf("NG :(\n");
			exit (0);
		}
	}
	else
	{
		if (strcmp(test, test2) != 0)
		{
			printf("NG :(\n");
			exit (0);
		}
		else
		{
			printf("calloc == ft_calloc\n");
			printf("OK :)\n");
		}
	}
	return ;
}

void	test5_size_0_case(void)
{
	char	*test = "";
	char	*test2 = "";
	size_t	count = SIZE_MAX;
	size_t	size = 0;

	printf("\n///test5_size_0_case///\n");
	test = calloc(count, size);
	test2 = ft_calloc(count, size);
	if (test == NULL)
	{
		printf("calloc: Could not allocate\n");
		if (test2 == NULL)
		{
			printf("ft_calloc: Could not allocate\n");
			printf("OK :)\n");
			return ;
		}
		else
		{
			printf("NG :(\n");
			exit (0);
		}
	}
	else
	{
		if (strcmp(test, test2) != 0)
		{
			printf("NG :(\n");
			exit (0);
		}
		else
		{
			printf("calloc == ft_calloc\n");
			printf("OK :)\n");
		}
	}
	return ;
}

void	test6_count_and_size_0_case(void)
{
	char	*test = "";
	char	*test2 = "";
	size_t	count = 0;
	size_t	size = 0;

	printf("\n///test6_count_and_size_0_case///\n");
	test = calloc(count, size);
	test2 = ft_calloc(count, size);
	if (test == NULL)
	{
		printf("calloc: Could not allocate\n");
		if (test2 == NULL)
		{
			printf("ft_calloc: Could not allocate\n");
			printf("OK :)\n");
			return ;
		}
		else
		{
			printf("NG :(\n");
			exit (0);
		}
	}
	else
	{
		if (strcmp(test, test2) != 0)
		{
			printf("NG :(\n");
			exit (0);
		}
		else
		{
			printf("calloc == ft_calloc\n");
			printf("OK :)\n");
		}
	}
	return ;
}
*/
