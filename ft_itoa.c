/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:46:32 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/15 01:04:05 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(int n);

char	*ft_itoa(int n)
{
	size_t			digit_count;
	char			*ret;
	unsigned int	num;

	digit_count = count_digit(n);
	ret = (char *)malloc((digit_count + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[digit_count--] = '\0';
	num = n;
	if (n == 0)
		ret[0] = '0';
	else if (n < 0)
	{
		num = n * -1;
		ret[0] = '-';
	}
	while (digit_count >= 0 && num != 0)
	{
		ret[digit_count--] = num % 10 + '0';
		num /= 10;
	}
	return (ret);
}

size_t	count_digit(int n)
{
	size_t		count;
	long int	num;

	count = 1;
	num = n;
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num >= 10)
	{
		num /= 10;
		count++;
	}
	return (count);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	test1 = 100;
	int	test2 = -100;
	int	test3 = INT_MAX;
	int	test4 = INT_MIN;
	int	test5 = 0;

	if (test1 == atoi(ft_itoa(test1)))
	{
		printf("///test1///\n%d:\t%s\n", test1, ft_itoa(100));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		return (0);
	}
	if (test2 == atoi(ft_itoa(test2)))
	{
		printf("\n///test2///\n%d:\t%s\n", test2, ft_itoa(-100));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		return (0);
	}
	if (test3 == atoi(ft_itoa(test3)))
	{
		printf("\n///test3///\n%d:\t%s\n", test3, ft_itoa(INT_MAX));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		return (0);
	}
	if (test4 == atoi(ft_itoa(test4)))
	{
		printf("\n///test4///\n%d:\t%s\n", test4, ft_itoa(INT_MIN));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		return (0);
	}
	if (test5 == atoi(ft_itoa(test5)))
	{
		printf("\n///test5///\n%d:\t%s\n", test5, ft_itoa(0));
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		return (0);
	}
	return (0);
}
*/
