/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:36:35 by ktaka             #+#    #+#             */
/*   Updated: 2021/11/10 23:36:39 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = b;
	while (i < len)
	{
		*b = c;
		b++;
		i++;
	}
	return (tmp);
}

/*
int	main(void)
{
	char	str1[] = "ABCDEFG";
	char	str2[] = "ABCDEFG";

	memset(str1 + 10, '1', 1);
	ft_memset(str2 + 10, '1', 1);
	printf("Expected_Output\n");
	printf("%s\n", str1);
	printf("---------------\n");
	printf("Actual_Output\n");
	printf("%s\n", str2);
	return (0);
}
*/
