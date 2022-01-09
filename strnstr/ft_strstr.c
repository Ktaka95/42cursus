/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:15:40 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/06 17:15:41 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);

int	ft_strcmp(const char *s1, const char *s2);

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*const_to_char_haystack;
	size_t	i;
	size_t	j;
	int		str_same_checker;

	const_to_char_haystack = (char *)haystack;
	i = 0;
	j = 0;
	str_same_checker = 0;
	while (j < ft_strlen(haystack))
	{
		while (i < ft_strlen(needle))
		{
			const_to_char_haystack[i] = haystack[i];
			i++;
		}
		return (const_to_char_haystack);
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	ret;
	int	len_s1;
	int	len_s2;

	i = 0;
	ret = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (s1[0] == '\0' || s2[0] == '\0')
		ret = s1[i] - s2[i];
	else
	{
		while (i <= len_s1 || i <= len_s2)
		{
			if (s1[i] == s2[i])
				i++;
			else
			{
				ret = s1[i] - s2[i];
				break ;
			}
		}
	}
	return (ret);
}
