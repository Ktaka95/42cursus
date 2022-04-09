/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:46:32 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 01:46:33 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digit_check(int n);

char	*ft_itoa(int n)
{
	size_t			digit_count;
	char			*ret;
	unsigned int	num;

	digit_count = digit_check(n);
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

size_t	digit_check(int n)
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

// #include <stdio.h>
// #include <limits.h>

// void	test1_INT_MIN_to_0_case(void);
// void	test2_1_to_INT_MAX_case(void);

// int main(void)
// {
// 	test1_INT_MIN_to_0_case();
// 	sleep(5);
// 	test2_1_to_INT_MAX_case();
// 	return (0);
// }

// void	test1_INT_MIN_to_0_case(void)
// {
// 	int	n = INT_MIN;
// 	char	*num = NULL;
// 	int		check;

// 	printf("///test1_INT_MIN_to_0///\n");
// 	sleep(2);
// 	while (n <= 0)
// 	{
// 		num = ft_itoa(n);
// 		check = atoi(num);
// 		if (check == n)
// 			printf("%d: OK\n", n);
// 		else
// 		{
// 			printf("NG :(\n");
// 			exit (0);
// 		}
// 		if (n == 0)
// 			break ;
// 		n += 8192;
// 	}
// }

// void	test2_1_to_INT_MAX_case(void)
// {
// 	int		n = 1;
// 	char	*num = NULL;
// 	int		check;

// 	printf("\n///test2_1_to_INT_MAX_case///\n");
// 	sleep(2);
// 	while (n <= INT_MAX)
// 	{
// 		num = ft_itoa(n);
// 		check = atoi(num);
// 		if (check == n)
// 			printf("%d: OK\n", n);
// 		else
// 		{
// 			printf("NG :(\n");
// 			exit (0);
// 		}
// 		if (n == INT_MAX)
// 			break ;
// 		n += 11627;
// 	}
// }
