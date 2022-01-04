/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:41:45 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/12 16:41:48 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	main(void)
{
	char	str[] = "";

	printf("Expected_Output:\n");
	printf("ABC:    = %d\n", strncmp(str, "ABC", 2));
	printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 3));
	printf("ABC: AAA   = %d\n", strncmp(str, "ABC", 4));
	printf("ABC: ABCD  = %d\n", strncmp(str, "", 0));
	printf("ABC: AB    = %d\n", strncmp(str, "", 1));
	printf("ABC: B     = %d\n", strncmp(str, "", 2));
	printf("ABC: A     = %d\n", strncmp(str, "", 3));

	printf("---------------\n");

	printf("Actual_Output:\n");
	printf("ABC:    = %d\n", ft_strncmp(str, "ABC", 2));
	printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 3));
	printf("ABC: AAA   = %d\n", ft_strncmp(str, "ABC", 4));
	printf("ABC: ABCD  = %d\n", ft_strncmp(str, "", 0));
	printf("ABC: AB    = %d\n", ft_strncmp(str, "", 1));
	printf("ABC: B     = %d\n", ft_strncmp(str, "", 2));
	printf("ABC: A     = %d\n", ft_strncmp(str, "", 3));

	return (0);
}
