/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:40:55 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/27 23:40:58 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <stdio.h>
int	main(void)
{
	int		fd = 1;
	char	c = 'A';

	while (fd < 3)
	{
		ft_putchar_fd(c, fd);
		printf("\n");
		fd++;
	}
	return (0);
}
*/
