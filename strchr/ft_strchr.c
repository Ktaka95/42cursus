/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:15:09 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/01 23:15:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*const_to_char_s;

	const_to_char_s = (char *)s;
	while (*const_to_char_s)
	{
		if (*const_to_char_s == c)
			return (const_to_char_s);
		const_to_char_s++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "abcdefghijklmnopqrstuvwxyz", *p;
// 	int c;

// 	printf("検索文字を入力してください。");
// 	c = getchar();

// 	p = ft_strchr(str, c);
// 	printf("%s\n", p);

// 	return 0;
// }
