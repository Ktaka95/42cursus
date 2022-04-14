/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:04:08 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/15 02:43:05 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del != NULL)
		del(lst->content);
	free(lst);
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
	system("leaks -q a.out");
	return (0);
}

void	test1_normal_case(void)
{
	printf("///test1_normal_case///\n");
	t_list	*lst = ft_lstnew(strdup("Hello, 42 world!"));
	printf("--before lstdelone--\n");
	printf("%s\n", (char *)lst->content);
	printf("\n--after lstdelone--\n");
	ft_lstdelone(lst, free);
	return ;
}

void	test2_normal_case2(void)
{
	printf("\n///test2_normal_case2///\n");
	t_list	*lst = ft_lstnew("Hello, 42 world!");
	printf("--before lstdelone--\n");
	printf("%s\n", (char *)lst->content);
	printf("\n--after lstdelone--\n");
	printf("lst->content not mallocated, can't free\n");
	free(lst);
	return ;
}

void	test3_lst_null_case(void)
{
	printf("\n///test3_lst_null_case///\n");
	t_list	*lst = NULL; 
	printf("--before lstdelone--\n");
	printf("%p\n", lst); 
	printf("\n--after lstdelone--\n");
	ft_lstdelone(lst, free);
	return ;
}

void	test4_del_null_case(void)
{
	printf("\n///test4_del_null_case///\n");
	t_list	*lst = ft_lstnew("Hello, 42 world!");
	printf("--before lstdelone--\n");
	printf("%s\n", (char *)lst->content);
	printf("\n--after lstdelone--\n");
	ft_lstdelone(lst, NULL);
	return ;
}
*/
