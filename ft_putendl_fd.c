/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:39:18 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 00:39:19 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int	main(void)
{
	char	*str = "Hello, 42 world!";
	int		fd = 1;

	while (fd < 3)
	{
		ft_putendl_fd(str, fd);
		fd++;
	}
	return (0);
}
*/
