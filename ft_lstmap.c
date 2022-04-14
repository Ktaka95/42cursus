/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:14:51 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/14 13:27:20 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		lst_size;
	t_list	*new_lst;
	int		i;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst_size = ft_lstsize(lst);
	new_lst = (t_list *)malloc((lst_size + 1) * sizeof(t_list));
	if (new_lst == NULL)
		return (NULL);
	i = 0;
	while (i < lst_size)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (new_lst == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}

	}

	return (lst);
}
