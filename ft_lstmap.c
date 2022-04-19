/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:14:51 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/19 16:22:57 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_each_node;

	new_lst = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_each_node = ft_lstnew((*f)(lst->content));
		if (new_each_node == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_each_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*
#include <stdio.h>
#include <string.h>

void	*test_func(void	*content);
void	test1_normal_case(void);
void	test2_normal_case2(void);
void	test3_lst_null_case(void);
void	test4_f_null_case(void);
void	test5_new_content_null_case(void);

int	main(void)
{
	test1_normal_case();
	test2_normal_case2();
	test3_lst_null_case();
	test4_f_null_case();
	test5_new_content_null_case();
}

void  *test_func(void *content)
{
	char	*new_content;

	new_content = strdup("Override!");
	content = new_content;
	return (content);
}

void  *test_func2(void *content)
{
	char  *new_content;

	new_content = strchr((char *)content, 'o');
	return (new_content);
}

void  test1_normal_case(void)
{
	t_list	*lst = NULL;
	t_list	*start = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;
	start = lst0;
	printf("///test1_normal_case///\n");
	printf("--before lstmap--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n--after lstmap--\n");
	lst = lst0;
	i = 0;
	lst = ft_lstmap(lst, test_func, free);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n///ori_lst///\n");
	i = 0;
	while (start != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, start);
		printf("lst[%d]-content:\t%s\n", i, (char *)start->content);
		printf("lst[%d]-next:\t%p\n", i, start->next);
		start = start->next;
		i++;
	}
	return ;
}

void  test2_normal_case2(void)
{
	t_list	*lst = NULL;
	t_list	*start = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;
	start = lst0;
	printf("\n///test2_normal_case2///\n");
	printf("--before lstmap--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n--after lstmap--\n");
	lst = lst2;
	i = 0;
	lst = ft_lstmap(lst, test_func, free);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n///ori_lst///\n");
	i = 0;
	while (start != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, start);
		printf("lst[%d]-content:\t%s\n", i, (char *)start->content);
		printf("lst[%d]-next:\t%p\n", i, start->next);
		start = start->next;
		i++;
	}
	return ;
}

void  test3_lst_null_case(void)
{
	t_list	*lst = NULL;
	t_list	*start = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;
	start = lst0;
	printf("\n///test3_lst_null_case///\n");
	printf("--before lstmap--\n");
	printf("lst: %p\n", lst);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n--after lstmap--\n");
	lst = NULL;
	i = 0;
	lst = ft_lstmap(lst, test_func, free);
	printf("lst: %p\n", lst);
	while (start != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, start);
		printf("lst[%d]-content:\t%s\n", i, (char *)start->content);
		printf("lst[%d]-next:\t%p\n", i, start->next);
		start = start->next;
		i++;
	}
	return ;
}

void  test4_f_null_case(void)
{
	t_list	*lst = NULL;
	t_list	*start = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;
	start = lst0;
	printf("\n///test4_f_null_case///\n");
	printf("--before lstmap--\n");
	printf("lst: %p\n", lst);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n--after lstmap--\n");
	lst = NULL;
	i = 0;
	lst = ft_lstmap(lst, NULL, free);
	printf("lst: %p\n", lst);
	while (start != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, start);
		printf("lst[%d]-content:\t%s\n", i, (char *)start->content);
		printf("lst[%d]-next:\t%p\n", i, start->next);
		start = start->next;
		i++;
	}
	return ;
}

void  test5_new_content_null_case(void)
{
	t_list	*lst = NULL;
	t_list	*start = NULL;
	t_list	*lst0 = ft_lstnew(strdup("Hello,"));
	t_list	*lst1 = ft_lstnew(strdup("42"));
	t_list	*lst2 = ft_lstnew(strdup("world"));
	int		i = 0;

	lst0->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;
	lst = lst0;
	start = lst0;
	printf("\n///test5_new_content_null_case///\n");
	printf("--before lstmap--\n");
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n--after lstmap--\n");
	lst = lst0;
	i = 0;
	lst = ft_lstmap(lst, test_func2, free);
	while (lst != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, lst);
		printf("lst[%d]-content:\t%s\n", i, (char *)lst->content);
		printf("lst[%d]-next:\t%p\n", i, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n///ori_lst///\n");
	i = 0;
	while (start != NULL)
	{
		printf("lst[%d]-now:\t%p\n", i, start);
		printf("lst[%d]-content:\t%s\n", i, (char *)start->content);
		printf("lst[%d]-next:\t%p\n", i, start->next);
		start = start->next;
		i++;
	}
	return ;
}
*/
