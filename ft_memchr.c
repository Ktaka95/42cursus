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

void test1_normal_case(void);
void test2_no_occur_case(void);
void test3_occur_after_size_case(void);
void test4_occur_several_times_case(void);
void test5_occur_several_times_case2(void);
void test6_size0_NULL_case(void);
void test7_size0_normal_case(void);
void test8_null_middle_case(void);

int	main(void)
{
	test1_normal_case();
	test2_no_occur_case();
	test3_occur_after_size_case();
	test4_occur_several_times_case();
	test5_occur_several_times_case2();
	test6_size0_NULL_case();
	test7_size0_normal_case();
	test8_null_middle_case();
	printf("OK :)\n");
	return (0);
}

void test1_normal_case(void)
{
	char	*s = "ABCDEFG";
	char	*ft_s = "ABCDEFG";

	s = memchr(s, 'C', 8);
	ft_s = ft_memchr(ft_s, 'C', 8);
	printf("///test1_normal_case///\n");
	if (strcmp(s, ft_s) != 0)
	{
		printf("NG :(\n");
		exit (0);
	}
	printf("original: ft: \n%s\t%s\n", s, ft_s);
}

void test2_no_occur_case(void)
{
	char	*s = "HIJKLMN";
	char	*ft_s = "HIJKLMN";

	s = memchr(s, 'C', 8);
	ft_s = ft_memchr(ft_s, 'C', 8);
	printf("///test2_no_occur_case///\n");
	if (s != ft_s)
	{
		printf("NG :(\n");
		exit (0);
	}
	printf("original: ft: \n%s\t%s\n", s, ft_s);
}

void test3_occur_after_size_case(void)
{
	char	*s = "OPQRSTUVC";
	char	*ft_s = "OPQRSTUVC";

	s = memchr(s, 'C', 8);
	ft_s = ft_memchr(ft_s, 'C', 8);
	printf("///test3_occur_after_size_case///\n");
	if (s != ft_s)
	{
		printf("NG :(\n");
		exit (0);
	}
	printf("original: ft: \n%s\t%s\n", s, ft_s);
}

void test4_occur_several_times_case(void)
{
	char	*s = "CCCCCCC";
	char	*ft_s = "CCCCCCC";

	s = memchr(s, 'C', 8);
	ft_s = ft_memchr(ft_s, 'C', 8);
	printf("///test4_occur_several_times_case///\n");
	if (strcmp(s, ft_s) != 0)
	{
		printf("NG :(\n");
		exit (0);
	}
	printf("original: ft: \n%s\t%s\n", s, ft_s);
}

void test5_occur_several_times_case2(void)
{
	char	*s = "ABCDCFC";
	char	*ft_s = "ABCDCFC";

	s = memchr(s, 'C', 8);
	ft_s = ft_memchr(ft_s, 'C', 8);
	printf("///test5_occur_several_times_case2///\n");
	if (strcmp(s, ft_s) != 0)
	{
		printf("NG :(\n");
		exit (0);
	}
	printf("original: ft: \n%s\t%s\n", s, ft_s);
}

void test6_size0_NULL_case(void)
{
	char	*s = NULL;
	char	*ft_s = NULL;

	s = memchr(s, 'C', 0);
	ft_s = ft_memchr(ft_s, 'C', 0);
	printf("///test6_size0_NULL_case///\n");
	if (s != ft_s)
	{
		printf("NG :(\n");
		exit (0);
	}
	printf("original: ft: \n%s\t%s\n", s, ft_s);
}

void test7_size0_normal_case(void)
{
	char	*s = "ABCDEFG";
	char	*ft_s = "ABCDEFG";

	s = memchr(s, 'C', 0);
	ft_s = ft_memchr(ft_s, 'C', 0);
	printf("///test7_size0_normal_case///\n");
	if (s != ft_s)
	{
		printf("NG :(\n");
		exit (0);
	}
	printf("original: ft: \n%s\t%s\n", s, ft_s);
}

void test8_null_middle_case(void)
{
	char	*s = "AB\0CDEFG";
	char	*ft_s = "AB\0CDEFG";

	s = memchr(s, 'C', 8);
	ft_s = ft_memchr(ft_s, 'C', 8);
	printf("///test8_null_middle_case///\n");
	if (s != ft_s)
	{
		printf("NG :(\n");
		exit (0);
	}
	printf("original: ft: \n%s\t%s\n", s, ft_s);
}
*/
