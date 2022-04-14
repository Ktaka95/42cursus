/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:44:44 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/15 03:01:11 by ktakada          ###   ########.fr       */
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
	return ;
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	test1 = 100;
	int	test2 = -100;
	int	test3 = INT_MAX;
	int	test4 = INT_MIN;
	int	test5 = 0;

	printf("///test1///\n");
	ft_putnbr_fd(test1, 1);
	printf(":\t %d", test1);
	printf("\n\n///test2///\n");
	ft_putnbr_fd(test2, 1);
	printf(":\t %d", test2);
	printf("\n\n///test3///\n");
	ft_putnbr_fd(test3, 1);
	printf(":\t %d", test3);
	printf("\n\n///test4///\n");
	ft_putnbr_fd(test4, 1);
	printf(":\t %d", test4);
	printf("\n\n///test5///\n");
	ft_putnbr_fd(test5, 1);
	printf(":\t %d\n", test5);
	return (0);
}
