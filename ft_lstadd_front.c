/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:38:10 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/13 16:58:22 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	size_t	i;

	i = 0;
	while (lst[i] != NULL)
		i++;
	ist[i + 1] = NULL;
	while (i > 0)
	{
		ist[i] ist[i - 1];
		i--;
	}
	ist[i] = new;
	return ;
}
