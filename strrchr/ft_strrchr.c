/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:59:03 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/06 15:59:04 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*const_to_char_s;
	int		i;

	const_to_char_s = (char *)s;
	i = 0;
	while (*const_to_char_s)
	{
		i++;
		const_to_char_s++;
	}
	const_to_char_s--;
	while (i > 0)
	{
		if (*const_to_char_s == c)
			return (const_to_char_s);
		const_to_char_s--;
		i--;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "1abcdefghijklmn12abcdefghijklmn2", *p;
// 	int c;

// 	printf("検索文字を入力してください。");
// 	c = getchar();

// 	p = strchr(str, c);
// 	printf("%s\n", p);
// 	p = ft_strrchr(str, c);
// 	printf("%s\n", p);

// 	return 0;
// }
