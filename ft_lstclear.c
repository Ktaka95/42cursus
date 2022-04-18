/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:37:20 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/18 13:37:21 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
	return ;
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_normal_case2(void);
void	test3_lst_null_case(void);
void	test4_del_null_case(void);

int	main(void)
{
	test1_normal_case();
	test2_normal_case2();
	test3_lst_null_case();
	test4_del_null_case();
}


void	test1_normal_case(void)
{
	t_list	**lst = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = &lst0;
	printf("///test1_normal_case///\n");
	printf("--before lstclear--\n");
	printf("lst:\t%p\n", lst);
	while (*lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, *lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)(*lst)->content);
		printf("lst[%d]-next:\t%p\n", i, (*lst)->next);
		*lst = (*lst)->next;
		i++;
	}
	printf("\n--after lstclear--\n");
	lst = &lst0;
	i = 0;
	ft_lstclear(lst, free);
	while (*lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, *lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)(*lst)->content);
		printf("lst[%d]-next:\t%p\n", i, (*lst)->next);
		*lst = (*lst)->next;
		i++;
	}
	printf("lst:\t%p\n", *lst);
	return ;
}

void	test2_normal_case2(void)
{
	t_list	**lst = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = &lst0;
	printf("\n///test2_normal_case2///\n");
	printf("--before lstclear--\n");
	printf("lst:\t%p\n", lst);
	while (*lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, *lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)(*lst)->content);
		printf("lst[%d]-next:\t%p\n", i, (*lst)->next);
		*lst = (*lst)->next;
		i++;
	}
	printf("\n--after lstclear--\n");
	lst = &lst2;
	i = 0;
	ft_lstclear(lst, free);
	lst = &lst0;
	// while (lst != NULL)
	// {
	// 	printf("lst[%d]-now:\t%p\n", i, *lst);
	// 	printf("lst[%d]-content:\t%s\n", i, (char *)(*lst)->content);
	// 	printf("lst[%d]-next:\t%p\n", i, (*lst)->next);
	// 	*lst = (*lst)->next;
	// 	i++;
	// }
	printf("lst:\t%p\n", *lst);
	return ;
}

void	test3_lst_null_case(void)
{
	t_list	**lst = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	printf("\n///test3_lst_null_case///\n");
	printf("--before lstclear--\n");
	printf("lst:\t%p\n", lst);
	printf("\n--after lstclear--\n");
	ft_lstclear(lst, free);
	printf("lst:\t%p\n", lst);
	return ;
}

void	test4_del_null_case(void)
{
	t_list	**lst = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = &lst0;
	printf("\n///test4_del_null_case///\n");
	printf("--before lstclear--\n");
	printf("lst:\t%p\n", lst);
	while (*lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, *lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)(*lst)->content);
		printf("lst[%d]-next:\t%p\n", i, (*lst)->next);
		*lst = (*lst)->next;
		i++;
	}
	printf("\n--after lstclear--\n");
	lst = &lst0;
	i = 0;
	ft_lstclear(lst, NULL);
	while (*lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, *lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)(*lst)->content);
		printf("lst[%d]-next:\t%p\n", i, (*lst)->next);
		*lst = (*lst)->next;
		i++;
	}
	printf("lst:\t%p\n", *lst);
	return ;
}
*/
