/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:12:43 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/18 14:33:27 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
	return ;
}

/*
#include <stdio.h>
#include <string.h>

void	test_func(void *content);
void	test1_normal_case(void);
void	test2_lst_null_case(void);
void	test3_f_null_case(void);

int	main(void)
{
	test1_normal_case();
	test2_lst_null_case();
	test3_f_null_case();
}

void  test_func(void *content)
{
	char	*new_content;

	new_content = (char *)content;
	*new_content = '!';
}

void	test1_normal_case(void)
{
	t_list	*lst = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;
	printf("///test1_normal_case///\n");
	printf("--before lstiter--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n--after lstiter--\n");
	lst = lst0;
	i = 0;
	ft_lstiter(lst, test_func);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	return ;
}

void	test2_lst_null_case(void)
{
	t_list	*lst = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	printf("\n///test2_lst_null_case///\n");
	printf("--before lstiter--\n");
	printf("lst:\t%p\n", lst);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n--after lstiter--\n");
	i = 0;
	ft_lstiter(lst, test_func);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("lst:\t%p\n", lst);
	return ;
}

void	test3_f_null_case(void)
{
	t_list	*lst = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;
	printf("\n///test3_f_null_case///\n");
	printf("--before lstiter--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n--after lstiter--\n");
	lst = lst0;
	i = 0;
	ft_lstiter(lst, NULL);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	return ;
}
*/
