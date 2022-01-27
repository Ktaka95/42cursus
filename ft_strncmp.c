/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:41:36 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/12 16:41:38 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	size_t			i;
	int				ret;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	ret = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (ret);
	else
	{
		while (i < n && (i <= ft_strlen(s1) || i <= ft_strlen(s2)))
		{
			if (str1[i] == str2[i])
				i++;
			else
			{
				ret = str1[i] - str2[i];
				break ;
			}
		}
	}
	return (ret);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "ABC";
// 	char	*s1 = "\200";
// 	char	*s2 = "\0";

// 	printf("Expected_Output:\n");
// 	printf("ABC: ABD   = %d\n", strncmp(str, "ABC", 2));
// 	printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 3));
// 	printf("ABC: AAA   = %d\n", strncmp(str, "ABC", 4));
// 	printf("ABC: ABCD  = %d\n", strncmp(str, "", 0));
// 	printf("ABC: AB    = %d\n", strncmp(str, "", 1));
// 	printf("ABC: B     = %d\n", strncmp(str, "", 2));
// 	printf("ABC: A     = %d\n", strncmp(str, "", 3));
// 	printf("%s: %s     = %d\n", s1, s2, strncmp(s1, s2, 1));

// 	printf("---------------\n");

// 	printf("Actual_Output:\n");
// 	printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABC", 2));
// 	printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 3));
// 	printf("ABC: AAA   = %d\n", ft_strncmp(str, "ABC", 4));
// 	printf("ABC: ABCD  = %d\n", ft_strncmp(str, "", 0));
// 	printf("ABC: AB    = %d\n", ft_strncmp(str, "", 1));
// 	printf("ABC: B     = %d\n", ft_strncmp(str, "", 2));
// 	printf("ABC: A     = %d\n", ft_strncmp(str, "", 3));
// 	printf("%s: %s     = %d\n", s1, s2, ft_strncmp(s1, s2, 1));

// 	return (0);
// }
