/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:14:38 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/10 21:14:39 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*void_to_unsigned_char_dst;
	unsigned char	*void_to_unsigned_char_src;

	i = 0;
	void_to_unsigned_char_dst = (unsigned char *)dst;
	void_to_unsigned_char_src = (unsigned char *)src;
	while (i < n)
	{
		void_to_unsigned_char_dst[i] = void_to_unsigned_char_src[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

int	main()
{
		printf("Original_memcpy\n");
		char    src[10];
        char    dst[10];
        int     i1;

        for (i1 = 0; i1 < 10; i1++)
        {
                src[i1] = i1;
        }

        printf("1.");
        for (i1 = 0; i1 < 10; i1++)
        {
                printf("[%d]", src[i1]);
        }
        printf("\n2.");

       memcpy(dst, src, 10);

        for (i1 = 0; i1 < 10; i1++)
        {
                printf("[%d]", dst[i1]);
        }
		printf("\n");
		printf("ft_memcpy\n");
		char    src2[10];
        char    dst2[10];
        int     i2;

        for (i2 = 0; i2 < 10; i2++)
        {
                src2[i2] = i2;
        }

        printf("1.");
        for (i2 = 0; i2 < 10; i2++)
        {
                printf("[%d]", src2[i2]);
        }
        printf("\n2.");

       ft_memcpy(dst2, src2, 10);

        for (i2 = 0; i2 < 10; i2++)
        {
                printf("[%d]", dst2[i2]);
        }
}
