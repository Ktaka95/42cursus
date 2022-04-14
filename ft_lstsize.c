/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:41:39 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/14 20:57:57 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	long	count;

	count = 0;
	while (lst != NULL)
	{
		if (count == INT_MAX)
			return (0);
		count++;
		lst = lst->next;
	}
	return ((int) count);
}

/*
#include <stdio.h>

void	test1_normal_case(void);
void	test2_lst_null_case(void);

int	main(void)
{
	test1_normal_case();
	test2_lst_null_case();
	return (0);
}


void	test1_normal_case(void)
{
	t_list	*lst1 = ft_lstnew((void *)"Hello,");
	t_list	*lst2 = ft_lstnew((void *)"42");
	t_list	*lst3 = ft_lstnew((void *)"world!");
	int		lstsize;

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;
	t_list	*lst = lst1;

	printf("///test1_normal_case///\n");
	lstsize = ft_lstsize(lst);
	printf("%d\n", lstsize);
	return ;
}

void	test2_lst_null_case(void)
{
	t_list	*lst = NULL;
	int		lstsize;

	printf("\n///test2_lst_null_case///\n");
	lstsize = ft_lstsize(lst);
	printf("%d\n", lstsize);
	return ;
}
*/
