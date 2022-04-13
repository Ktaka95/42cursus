/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:38:10 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/13 16:59:49 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	size_t	i;

	i = 0;
	while (lst[i] != NULL)
		i++;
	lst[i + 1] = NULL;
	while (i > 0)
	{
		lst[i] = lst[i - 1];
		i--;
	}
	lst[i] = new;
	return ;
}
