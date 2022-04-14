/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:38:18 by ktakada           #+#    #+#             */
/*   Updated: 2022/04/14 15:11:04 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list) * 1);
	if (new_list == NULL)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

/*
#include <stdio.h>
#include <string.h>

void	test1_normal_case(void);
void	test2_content_null_case(void);

int	main(void)
{
	test1_normal_case();
	test2_content_null_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	*str = "Hello 42 world!";
	void	*content = str;
	t_list	*ret = NULL;

	printf("///test1_normal_case///\n");
	ret = ft_lstnew(content);
	printf("content: %s\n", str);
	printf("--after lstnew--\n");
	if (!strcmp(str, ret->content))
	{
		printf("new_content: %s\n", (char *)ret->content);
		printf("next: %s\n", (char *)ret->next);
		printf("OK :)\n");
		return ;
	}
	printf("NG :(\n)");
	return ;
}

void	test2_content_null_case(void)
{

	void	*content = NULL;
	t_list	*ret = NULL;

	printf("\n///test2_content_null_case///\n");
	ret = ft_lstnew(content);
	printf("content: %s\n", (char *)content);
	printf("--after lstnew--\n");
	if (content == NULL && ret->content == NULL)
	{
		printf("new_content: %s\n", (char *)ret->content);
		printf("next: %s\n", (char *)ret->next);
		printf("OK :)\n");
		return ;
	}
	printf("NG :(\n)");
	return ;
}
*/
