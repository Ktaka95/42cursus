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

static size_t	digit_check(int	n);

char *ft_itoa(int n)
{
	size_t		digit_cnt;
	// int			plus_or_minus;
	long int	num;
	char		*ret;
	size_t		i;

	digit_cnt = 0;
	// plus_or_minus = 0;
	num = n;
	i = 0;
	// if (num < 0)
	// {
	// 	num *= -1;
	// 	plus_or_minus += 1;
	// }
	digit_cnt = digit_check(num);
	ret = ft_calloc(digit_cnt + 1, sizeof(char));
	// if (plus_or_minus == 1)
	// 	ret[0] = '-';
	while (i < digit_cnt - 1)
	{
		ret++;
		i++;
	}
	while (i > 0)
	{
		ret[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	ret[0] = num + '0';
	return (ret);
}
	// long int	tmp;
	// char		*ret;

	// tmp = n;
	// ret = ft_calloc( ,sizeof(int));
	// if (ret == NULL)
	// 	return (NULL);
	// else

	// if (tmp < 0)
	// {
	// 	tmp = tmp * -1;
	// 	('-', fd);
	// }
	// if (tmp == 0)
	// 	ft_putchar_fd('0', fd);
	// else if (tmp < 10)
	// {
	// 	c = tmp + '0';
	// 	ft_putchar_fd(c, fd);
	// }
	// else
	// {
	// 	ft_putnbr_fd(tmp / 10, fd);
	// 	ft_putnbr_fd(tmp % 10, fd);
	// }
// }

size_t	digit_check(int	n)
{
	size_t		cnt;
	long int	num;

	cnt = 1;
	num = n;
	if (num < 0)
		num *= -1;
	if (0 <= num && num <= 9)
		return (cnt);
	while (num > 10)
	{
		num /= 10;
		cnt++;
	}
	return (cnt);
}

#include <stdio.h>

int main(void)
{
	int	n = 2147483647;
	char	*c = ft_itoa(n);

	printf("%s\n", c);
	return (0);
}
