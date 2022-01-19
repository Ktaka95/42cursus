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
	unsigned char	*void_to_unsignedchar_s;

	i = 0;
	void_to_unsignedchar_s = (unsigned char *)s;
	while (i < n)
	{
		*void_to_unsignedchar_s = 0;
		void_to_unsignedchar_s++;
		i++;
	}
}
