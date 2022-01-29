/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:56:19 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/28 01:56:20 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			original_s_len;

	i = 0;
	original_s_len = 0;
	if (s == NULL || f == NULL)
		return ;
	else
	{
		original_s_len = ft_strlen(s);
		while (i < original_s_len)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}

// #include <stdio.h>
// #include <string.h>

// void	f_striteri(unsigned i, char *s)
// {
// 	*s = i + '0';
// }

// int main(void)
// {
// 	char	b[] = "override this !";
// 	char	b2[0xF0];
// 	size_t	size = strlen(b);

// 	for (size_t i = 0; i < size; i++)
// 		f_striteri(i, b2 + i);
// 	b2[size] = 0;
// 	ft_striteri(b, f_striteri);
// 	printf("%s\n%s\n", b, b2);

// }
