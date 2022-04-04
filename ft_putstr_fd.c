/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:45:00 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/27 23:45:11 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char	*normal = "Hello, 42 world!";
	char	*empty = "";
	char	*null = NULL;
	int		fd = 1;

	while (fd < 3)
	{
		ft_putstr_fd(normal, fd);
		printf("\n");
		ft_putstr_fd(empty, fd);
		printf("\n");
		ft_putstr_fd(null, fd);
		printf("\n");
		fd++;
	}
	return (0);
}
*/
