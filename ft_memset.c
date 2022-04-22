/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:36:35 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/22 14:39:43 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	i = 0;
	str = (unsigned char *)b;
	chr = (unsigned char)c;
	while (i < len)
	{
		str[i] = chr;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_len0_case(void);
void	test3_b_empty_len0_case(void);
void	test4_b_NULL_len0_case(void);
void	test5_len_gt_b_case(void);
void	test6_b_NULL_case(void);

int	main(void)
{
	test1_normal_case();
	test2_len0_case();
	test3_b_empty_len0_case();
	test4_b_NULL_len0_case();
	test5_len_gt_b_case();
	test6_b_NULL_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	ori_arry[] = "Hello, world!";
	char	ft_arry[] = "Hello, world!";
	int		c = '?';
	size_t	len = 5;

	printf("///test1_normal_case///\n\
b: %s\nc: \'%c\'\nlen: %zu\n", ori_arry, c, len);
	printf("before memset: arry =>\t%s\n", ori_arry);
	memset(ori_arry, c, len);
	ft_memset(ft_arry, c, len);
	if (strcmp(ori_arry, ft_arry) == 0)
		printf("after ori_memset =>\t%s\n\
after ft_memset =>\t%s\nOK :)\n\n",ori_arry, ft_arry);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_len0_case(void)
{
	char	ori_arry[] = "Hello, world!";
	char	ft_arry[] = "Hello, world!";
	int		c = '?';
	size_t	len = 0;

	printf("///test2_len0_case///\n\
b: %s\nc: \'%c\'\nlen: %zu\n", ori_arry, c, len);
	printf("before memset: arry =>\t%s\n", ori_arry);
	memset(ori_arry, c, len);
	ft_memset(ft_arry, c, len);
	if (strcmp(ori_arry, ft_arry) == 0)
		printf("after ori_memset =>\t%s\n\
after ft_memset =>\t%s\nOK :)\n\n",ori_arry, ft_arry);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_b_empty_len0_case(void)
{
	char	ori_arry[] = "";
	char	ft_arry[] = "";
	int		c = '?';
	size_t	len = 0;

	printf("///test3_b_empty_len0_case///\n\
b: %s\nc: \'%c\'\nlen: %zu\n", ori_arry, c, len);
	printf("before memset: arry =>\t%s\n", ori_arry);
	memset(ori_arry, c, len);
	ft_memset(ft_arry, c, len);
	if (strcmp(ori_arry, ft_arry) == 0)
		printf("after ori_memset =>\t%s\n\
after ft_memset =>\t%s\nOK :)\n\n",ori_arry, ft_arry);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_b_NULL_len0_case(void)
{
	char	*ori_arry = NULL;
	char	*ft_arry = NULL;
	int		c = '?';
	size_t	len = 0;

	printf("///test4_b_NULL_len0_case///\n\
b: %s\nc: \'%c\'\nlen: %zu\n", ori_arry, c, len);
	printf("before memset: arry =>\t%s\n", ori_arry);
	memset(ori_arry, c, len);
	ft_memset(ft_arry, c, len);
	if (ori_arry == NULL && ft_arry == NULL)
		printf("after ori_memset =>\t%s\n\
after ft_memset =>\t%s\nOK :)\n\n",ori_arry, ft_arry);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test5_len_gt_b_case(void)
{
	char	ori_arry[] = "Hello, world!";
	char	ft_arry[] = "Hello, world!";
	int		c = '?';
	size_t	len = 100;

	printf("///test5_len_gt_b_case///\n\
b: %s\nc: \'%c\'\nlen: %zu\n", ori_arry, c, len);
	printf("before memset: arry =>\t%s\n", ori_arry);
	printf("test5_following_case_abort\n");
	memset(ori_arry, c, len);
	ft_memset(ft_arry, c, len);
	if (strcmp(ori_arry, ft_arry) == 0)
		printf("after ori_memset =>\t%s\n\
after ft_memset =>\t%s\nOK :)\n\n",ori_arry, ft_arry);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test6_b_NULL_case(void)
{
	char	*ori_arry = NULL;
	char	*ft_arry = NULL;
	int		c = '?';
	size_t	len = 10;

	printf("///test6_b_NULL_case///\n\
b: %s\nc: \'%c\'\nlen: %zu\n", ori_arry, c, len);
	printf("before memset: arry =>\t%s\n", ori_arry);
	printf("test6_following_case_segv\n");
	memset(ori_arry, c, len);
	ft_memset(ft_arry, c, len);
	return ;
}
*/
