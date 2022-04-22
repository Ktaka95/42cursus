/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:41:39 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/22 20:50:41 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		if (count == INT_MAX)
			return (-1);
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
#include <stdio.h>

void	test1_normal_case(void);
void	test2_lst_null_case(void);
void	test3_and_test4_lst_INT_MAX_and_over_INT_MAX_case(void);

int	main(void)
{
	test1_normal_case();
	test2_lst_null_case();
	test3_and_test4_lst_INT_MAX_and_over_INT_MAX_case();
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

void	test3_and_test4_lst_INT_MAX_and_over_INT_MAX_case(void)
{
	int	num = INT_MAX;
	t_list	**lst = (t_list **)malloc(sizeof(t_list *) * num);
	if (lst == NULL)
	{
		printf("Could not allocate\n");
		return ;
	}
	int	  i = 0;
	int	  size = 0;

	printf("\n///test3_lst_INT_MAX_case///\n");
	while (i < num)
	{
		ft_lstadd_front(lst, ft_lstnew(""));
		i++;
	}
	size = ft_lstsize(*lst);
	printf("%d\n", size);
	printf("\n///test4_lst_over_INT_MAX_case///\n");
	ft_lstadd_front(lst, ft_lstnew(""));
	size = ft_lstsize(*lst);
	printf("%d\n", size);
	return ;
}
*/
