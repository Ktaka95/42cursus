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

unsigned int	count_len(char	*str);

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	i;
	int				ret;
	unsigned int	len_s1;
	unsigned int	len_s2;

	i = 0;
	ret = 0;
	len_s1 = count_len(s1);
	len_s2 = count_len(s2);
	if (n == 0)
		return (ret);
	else
	{
		while (i < n && (i <= len_s1 || i <= len_s2))
		{
			if (s1[i] == s2[i])
				i++;
			else
			{
				ret = s1[i] - s2[i];
				break ;
			}
		}
	}
	return (ret);
}

unsigned int	count_len(char	*str)
{
	unsigned int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "ABC";

	printf("Expected_Output:\n");
	printf("ABC: ABD   = %d\n", strncmp(str, "ABC", 2));
	printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 3));
	printf("ABC: AAA   = %d\n", strncmp(str, "ABC", 4));
	printf("ABC: ABCD  = %d\n", strncmp(str, "", 0));
	printf("ABC: AB    = %d\n", strncmp(str, "", 1));
	printf("ABC: B     = %d\n", strncmp(str, "", 2));
	printf("ABC: A     = %d\n", strncmp(str, "", 3));

	printf("---------------\n");

	printf("Actual_Output:\n");
	printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABC", 2));
	printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 3));
	printf("ABC: AAA   = %d\n", ft_strncmp(str, "ABC", 4));
	printf("ABC: ABCD  = %d\n", ft_strncmp(str, "", 0));
	printf("ABC: AB    = %d\n", ft_strncmp(str, "", 1));
	printf("ABC: B     = %d\n", ft_strncmp(str, "", 2));
	printf("ABC: A     = %d\n", ft_strncmp(str, "", 3));

	return (0);
}
*/
