/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:50:59 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/14 22:40:24 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>

void	test1_normal_case(void);
void	test2_lst_null_case(void);

int	  main(void)
{
	test1_normal_case();
	test2_lst_null_case();
}

void	test1_normal_case(void)
{
	t_list	*lst0 = ft_lstnew("Hello,");
	t_list	*lst1 = ft_lstnew("42");
	t_list	*lst2 = ft_lstnew("world!");
	t_list	*lst = NULL;
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;

	printf("///test1_normal_case///\n");
	printf("--before lstlast--\n");
	while (lst != NULL)
	{
		printf("%d: %s\n", i, (char *)lst->content);
		lst = lst->next;
		i++;
	}
	lst = lst0;
	printf("\n--after lstlast--\n");
	lst = ft_lstlast(lst);
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return ;
}

void	test2_lst_null_case(void)
{
	t_list	*lst0 = ft_lstnew("Hello,");
	t_list	*lst1 = ft_lstnew("42");
	t_list	*lst2 = ft_lstnew("world!");
	t_list	*lst = NULL;
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;

	printf("\n///test2_lst_null_case///\n");
	printf("--before lstlast--\n");
	while (lst != NULL)
	{
		printf("%d: %s\n", i, (char *)lst->content);
		lst = lst->next;
		i++;
	}
	lst = NULL;
	printf("\n--after lstlast--\n");
	lst = ft_lstlast(lst);
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	if (lst == NULL)
		printf("%s\n", (char *)lst);
	return ;
}
*/
