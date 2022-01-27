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
