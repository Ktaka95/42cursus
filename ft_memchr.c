/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:09:54 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 16:09:54 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_no_occur_case(void);
void	test3_occur_after_size_case(void);
void	test4_occur_several_times_case(void);
void	test5_occur_several_times_case2(void);
void	test6_NULL_size_0_case(void);
void	test7_size0_normal_case(void);
void	test8_null_middle_case(void);

int	main(void)
{
	test1_normal_case();
	test2_no_occur_case();
	test3_occur_after_size_case();
	test4_occur_several_times_case();
	test5_occur_several_times_case2();
	test6_NULL_size_0_case();
	test7_size0_normal_case();
	test8_null_middle_case();
	printf("OK :)\n");
	return (0);
}

void	test1_normal_case(void)
{
	char	*ori_s = "ABCDEFG";
	char	*ft_s = strdup(ori_s);
	size_t	n = strlen(ori_s);
	int		c = 'C';

	printf("///test1_normal_case///\n");
	printf("--before memchr--\n");
	printf("ori_s: %s\nft_s: %s\nc: %c\nn: %zu\n", ori_s, ft_s, (char)c, n);
	ori_s = memchr(ori_s, c, n);
	ft_s = ft_memchr(ft_s, c, n);
	printf("--after memchr--\n");
	if ((ori_s == NULL && ft_s == NULL) || (strcmp(ori_s, ft_s) == 0))
		printf("s1: %s\ns2: %s\n", ori_s, ft_s);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_no_occur_case(void)
{
	char	*ori_s = "HIJKLMN";
	char	*ft_s = strdup(ori_s);
	size_t	n = strlen(ori_s);
	int		c = 'C';

	printf("\n///test2_no_occur_case///\n");
	printf("--before memchr--\n");
	printf("ori_s: %s\nft_s: %s\nc: %c\nn: %zu\n", ori_s, ft_s, (char)c, n);
	ori_s = memchr(ori_s, c, n);
	ft_s = ft_memchr(ft_s, c, n);
	printf("--after memchr--\n");
	if ((ori_s == NULL && ft_s == NULL) || (strcmp(ori_s, ft_s) == 0))
		printf("s1: %s\ns2: %s\n", ori_s, ft_s);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_occur_after_size_case(void)
{
	char	*ori_s = "OPQRSTUC";
	char	*ft_s = strdup(ori_s);
	size_t	n = strlen(ori_s) - 1;
	int		c = 'C';

	printf("\n///test3_occur_after_size_case///\n");
	printf("--before memchr--\n");
	printf("ori_s: %s\nft_s: %s\nc: %c\nn: %zu\n", ori_s, ft_s, (char)c, n);
	ori_s = memchr(ori_s, c, n);
	ft_s = ft_memchr(ft_s, c, n);
	printf("--after memchr--\n");
	if ((ori_s == NULL && ft_s == NULL) || (strcmp(ori_s, ft_s) == 0))
		printf("s1: %s\ns2: %s\n", ori_s, ft_s);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_occur_several_times_case(void)
{
	char	*ori_s = "CCCCCCC";
	char	*ft_s = strdup(ori_s);
	size_t	n = strlen(ori_s);
	int		c = 'C';

	printf("\n///test4_occur_several_times_case///\n");
	printf("--before memchr--\n");
	printf("ori_s: %s\nft_s: %s\nc: %c\nn: %zu\n", ori_s, ft_s, (char)c, n);
	ori_s = memchr(ori_s, c, n);
	ft_s = ft_memchr(ft_s, c, n);
	printf("--after memchr--\n");
	if ((ori_s == NULL && ft_s == NULL) || (strcmp(ori_s, ft_s) == 0))
		printf("s1: %s\ns2: %s\n", ori_s, ft_s);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test5_occur_several_times_case2(void)
{
	char	*ori_s = "ABCDCFC";
	char	*ft_s = strdup(ori_s);
	size_t	n = strlen(ori_s);
	int		c = 'C';

	printf("\n///test5_occur_several_times_case2///\n");
	printf("--before memchr--\n");
	printf("ori_s: %s\nft_s: %s\nc: %c\nn: %zu\n", ori_s, ft_s, (char)c, n);
	ori_s = memchr(ori_s, c, n);
	ft_s = ft_memchr(ft_s, c, n);
	printf("--after memchr--\n");
	if ((ori_s == NULL && ft_s == NULL) || (strcmp(ori_s, ft_s) == 0))
		printf("s1: %s\ns2: %s\n", ori_s, ft_s);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test6_NULL_size_0_case(void)
{
	char	*ori_s = NULL;
	char	*ft_s = NULL;
	size_t	n = 0;
	int		c = 'C';

	printf("\n///test6_NULL_size_0_case///\n");
	printf("--before memchr--\n");
	printf("ori_s: %s\nft_s: %s\nc: %c\nn: %zu\n", ori_s, ft_s, (char)c, n);
	ori_s = memchr(ori_s, c, n);
	ft_s = ft_memchr(ft_s, c, n);
	printf("--after memchr--\n");
	if ((ori_s == NULL && ft_s == NULL) || (strcmp(ori_s, ft_s) == 0))
		printf("s1: %s\ns2: %s\n", ori_s, ft_s);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test7_size0_normal_case(void)
{
	char	*ori_s = "ABCDEFG";
	char	*ft_s = strdup(ori_s);
	size_t	n = 0;
	int		c = 'C';

	printf("\n///test7_size0_normal_case///\n");
	printf("--before memchr--\n");
	printf("ori_s: %s\nft_s: %s\nc: %c\nn: %zu\n", ori_s, ft_s, (char)c, n);
	ori_s = memchr(ori_s, c, n);
	ft_s = ft_memchr(ft_s, c, n);
	printf("--after memchr--\n");
	if ((ori_s == NULL && ft_s == NULL) || (strcmp(ori_s, ft_s) == 0))
		printf("s1: %s\ns2: %s\n", ori_s, ft_s);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test8_null_middle_case(void)
{
	char	*ori_s = "AB\0CDEFG";
	char	*ft_s = "AB\0CDEFG";
	size_t	n = 8;
	int		c = 'C';

	printf("\n///test8_null_middle_case///\n");
	printf("--before memchr--\n");
	printf("ori_s: %s\nft_s: %s\nc: %c\nn: %zu\n", ori_s, ft_s, (char)c, n);
	ori_s = memchr(ori_s, c, n);
	ft_s = ft_memchr(ft_s, c, n);
	printf("--after memchr--\n");
	if ((ori_s == NULL && ft_s == NULL) || (strcmp(ori_s, ft_s) == 0))
		printf("s1: %s\ns2: %s\n", ori_s, ft_s);
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}
*/
