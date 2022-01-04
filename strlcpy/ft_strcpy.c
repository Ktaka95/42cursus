/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:56:45 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/07 16:56:52 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[] = "ABCDEFG";
	char	str2[] = "'123'";
	char	str3[] = "ABCDEFG";
	char	*p = "abcd";

	printf("Expected_Output:\n");
	strcpy(str1, str2);
	printf("%s\n", str1);

	strcpy(str1, p);
	printf("%s\n", str1);

	strcpy(str1, "xyz");
	printf("%s\n", str1);

	printf("---------------\n");

	printf("Actual_Output:\n");
	ft_strcpy(str3, str2);
	printf("%s\n", str3);

	ft_strcpy(str3, p);
	printf("%s\n", str3);

	ft_strcpy(str3, "xyz");
	printf("%s\n", str3);

	return (0);
}
*/
