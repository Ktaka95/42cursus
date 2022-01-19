/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:43:35 by ktaka             #+#    #+#             */
/*   Updated: 2021/11/12 22:43:37 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*unsigned_char_s;

	i = 0;
	unsigned_char_s = (unsigned char *)s;
	while (i < n)
	{
		unsigned_char_s[i] = '\0';
		i++;
	}
}
