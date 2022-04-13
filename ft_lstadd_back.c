/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:54:00 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/13 16:55:47 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	size_t	i;

	i = 0;
	while (lst[i] != NULL)
		i++;
	lst[i] = new;
	lst[i + 1] = NULL;
}
