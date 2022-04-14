/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:38:10 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/14 20:42:33 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
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
	char	*new_str = "Welcome";
	int		i = 0;
	t_list	*lst0 = ft_lstnew((void *)str0);
	t_list	*lst1 = ft_lstnew((void *)str1);
	t_list	*lst2 = ft_lstnew((void *)str2);
	t_list	*lst_new = ft_lstnew((void *)new_str);
	t_list	*lst = lst0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	printf("check before lstadd\n");

	printf("///test1_normal_case///\n");
	printf("--before lstadd_front--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	ft_lstadd_front(&lst0, lst_new);
	lst = lst_new;
	i = 0;
	printf("\n--after lstadd_front--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
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
	char	*new_str = "Welcome";
	int		i = 0;
	t_list	*lst0 = ft_lstnew((void *)str0);
	t_list	*lst1 = ft_lstnew((void *)str1);
	t_list	*lst2 = ft_lstnew((void *)str2);
	t_list	*lst_new = ft_lstnew((void *)new_str);
	t_list	*lst = lst0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	printf("check before lstadd\n");

	printf("\n///test2_lst_null_case///\n");
	printf("--before lstadd_front--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	ft_lstadd_front(NULL, lst_new);
	lst = lst_new;
	i = 0;
	printf("\n--after lstadd_front--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
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
	printf("check before lstadd\n");

	printf("\n///test3_new_null_case///\n");
	printf("--before lstadd_front--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	ft_lstadd_front(&lst0, lst_new);
	lst = lst_new;
	i = 0;
	printf("\n--after lstadd_front--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	return ;
}
*/
