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

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s);
		i++;
		s++;
	}
}

// #include <stdio.h>
// #include <string.h>

// void			f_striter(char *s) { *s = 'F'; }

// int main(void)
// {
// 	char	b[] = "override this !";
// 	char	b2[0xF0];
// 	size_t	size = strlen(b);
// 	int	i;

// 	i = 0;
// 	for (size_t i = 0; i < size; i++)
// 		f_striter(b2 + i);
// 	b2[size] = 0;
// 	ft_striteri(b, f_striter);
// 	i = strcmp(b, b2);
// 	printf("%s, %s, %d\n", b, b2, i);
// }
