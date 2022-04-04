/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:44:44 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 00:44:47 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	tmp;
	char		c;

	tmp = n;
	if (tmp < 0)
	{
		tmp = tmp * -1;
		ft_putchar_fd('-', fd);
	}
	if (tmp == 0)
		ft_putchar_fd('0', fd);
	else if (tmp < 10)
	{
		c = tmp + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd(tmp / 10, fd);
		ft_putnbr_fd(tmp % 10, fd);
	}
}

/*
#include <stdio.h>
#include <unistd.h>

void	test1_INT_MIN_to_0_case(void);
void	test2_0_to_INT_MAX_case(void);

int	main(void)
{
	test1_INT_MIN_to_0_case();
	sleep(10);
	test2_0_to_INT_MAX_case();
	return (0);
}

void	test1_INT_MIN_to_0_case(void)
{
	int	n = INT_MIN;
	int	fd = 1;

	while (n < 0)
	{
		while (fd < 3)
		{
			ft_putnbr_fd(n, fd);
			printf("\n");
			fd++;
		}
		fd = 1;
		n += 8192;
		if (n == 0)
		{
			while (fd < 3)
			{
				ft_putnbr_fd(n, fd);
				printf("\n");
				fd++;
			}
		}
	}
}

void	test2_0_to_INT_MAX_case(void)
{
	int	n = 1;
	int	fd = 1;

	while (n < INT_MAX)
	{
		while (fd < 3)
		{
			ft_putnbr_fd(n, fd);
			printf("\n");
			fd++;
		}
		fd = 1;
		n += 11627;
		if (n == INT_MAX)
		{
			while (fd < 3)
			{
				ft_putnbr_fd(n, fd);
				printf("\n");
				fd++;
			}
		}
	}
}
*/
