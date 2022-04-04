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

static char		*ft_itoa_if_argument_plus(int n);

static char		*ft_itoa_if_argument_minus(int n);

char	*ft_itoa(int n)
{
	if (n >= 0)
		return (ft_itoa_if_argument_plus(n));
	else
		return (ft_itoa_if_argument_minus(n));
}

size_t	digit_check(int n)
{
	size_t		cnt;
	long int	num;

	cnt = 1;
	num = n;
	if (num < 0)
		num *= -1;
	if (0 <= num && num <= 9)
		return (cnt);
	while (num >= 10)
	{
		num /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa_if_argument_plus(int n)
{
	size_t		digit_cnt;
	size_t		i;
	char		*ret;

	digit_cnt = digit_check(n);
	i = 0;
	ret = ft_calloc(digit_cnt + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	while (i < digit_cnt - 1)
		i++;
	while (i > 0)
	{
		ret[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	ret[i] = n + '0';
	return (ret);
}

char	*ft_itoa_if_argument_minus(int n)
{
	size_t			digit_cnt;
	size_t			i;
	char			*ret;
	unsigned int	num;

	digit_cnt = digit_check(n);
	i = 0;
	ret = ft_calloc(digit_cnt + 2, sizeof(char));
	if (ret == NULL)
		return (NULL);
	num = n * -1;
	while (i < digit_cnt)
		i++;
	while (i > 0)
	{
		ret[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	ret[i] = '-';
	return (ret);
}

/*
#include <stdio.h>
#include <limits.h>

void	test1_INT_MIN_to_0_case(void);
void	test2_1_to_INT_MAX_case(void);

int main(void)
{
	test1_INT_MIN_to_0_case();
	sleep(5);
	test2_1_to_INT_MAX_case();
	return (0);
}

void	test1_INT_MIN_to_0_case(void)
{
	int	n = INT_MIN;
	char	*num = NULL;
	int		check;

	printf("///test1_INT_MIN_to_0///\n");
	sleep(2);
	while (n <= 0)
	{
		num = ft_itoa(n);
		check = atoi(num);
		if (check == n)
			printf("%d: OK\n", n);
		else
		{
			printf("NG :(\n");
			exit (0);
		}
		if (n == 0)
			break ;
		n += 8192;
	}
}

void	test2_1_to_INT_MAX_case(void)
{
	int		n = 1;
	char	*num = NULL;
	int		check;

	printf("\n///test2_1_to_INT_MAX_case///\n");
	sleep(2);
	while (n <= INT_MAX)
	{
		num = ft_itoa(n);
		check = atoi(num);
		if (check == n)
			printf("%d: OK\n", n);
		else
		{
			printf("NG :(\n");
			exit (0);
		}
		if (n == INT_MAX)
			break ;
		n += 11627;
	}
}
*/
