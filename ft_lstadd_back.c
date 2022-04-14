/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:54:00 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/14 23:14:17 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	return ;
}

/*
#include <stdio.h>

void	test1_normal_case(void);
void	test2_lst_null_case(void);
void	test3_new_null_case(void);

int	main(void)
{
	test1_normal_case();
	test2_lst_null_case();
	test3_new_null_case();
}

void	test1_normal_case(void)
{
	char	*str0 = "Hello";
	char	*str1 = "42";
	char	*str2 = "world!";
	char	*new_str = "Goodbye";
	int		i = 0;
	t_list	*lst0 = ft_lstnew((void *)str0);
	t_list	*lst1 = ft_lstnew((void *)str1);
	t_list	*lst2 = ft_lstnew((void *)str2);
	t_list	*lst_new = ft_lstnew((void *)new_str);
	t_list	*lst = lst0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;

	printf("///test1_normal_case///\n");
	printf("--before lstadd_back--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("lst_want_to_add\n");
	printf("content:\t%s\n", (char *)lst_new->content);
	printf("now:\t%p\n", lst_new);
	printf("next:\t%p\n", lst_new->next);
	ft_lstadd_back(&lst0, lst_new);
	lst = lst0;
	i = 0;
	printf("\n--after lstadd_back--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	return ;
}

void	test2_lst_null_case(void)
{
	char	*str0 = "Hello";
	char	*str1 = "42";
	char	*str2 = "world!";
	char	*new_str = "Goodbye";
	int		i = 0;
	t_list	*lst0 = ft_lstnew((void *)str0);
	t_list	*lst1 = ft_lstnew((void *)str1);
	t_list	*lst2 = ft_lstnew((void *)str2);
	t_list	*lst_new = ft_lstnew((void *)new_str);
	t_list	*lst = lst0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;

	printf("\n///test2_lst_null_case///\n");
	printf("--before lstadd_back--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("lst_want_to_add\n");
	printf("content:\t%s\n", (char *)lst_new->content);
	printf("now:\t%p\n", lst_new);
	printf("next:\t%p\n", lst_new->next);
	ft_lstadd_back(NULL, lst_new);
	lst = lst0;
	i = 0;
	printf("\n--after lstadd_back--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	return ;
}

void	test3_new_null_case(void)
{
	char	*str0 = "Hello";
	char	*str1 = "42";
	char	*str2 = "world!";
	int		i = 0;
	t_list	*lst0 = ft_lstnew((void *)str0);
	t_list	*lst1 = ft_lstnew((void *)str1);
	t_list	*lst2 = ft_lstnew((void *)str2);
	t_list	*lst_new = NULL; 
	t_list	*lst = lst0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;

	printf("\n///test3_new_null_case///\n");
	printf("--before lstadd_back--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("lst_want_to_add\n");
	printf("%s\n", (char *)lst_new);
	ft_lstadd_back(&lst0, lst_new);
	lst = lst0;
	i = 0;
	printf("\n--after lstadd_back--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	return ;
}
*/
