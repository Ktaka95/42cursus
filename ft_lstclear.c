/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:08:52 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/13 17:12:17 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	size_t	i;

	i = 0;
	while (lst[i] != NULL)
	{
		lst[i]->content = del(lst[i]);
		free(lst[i].next);
		i++;
	}
	free(lst);
}
