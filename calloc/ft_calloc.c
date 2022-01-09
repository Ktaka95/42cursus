/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:22:41 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/06 23:22:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*heap;
	size_t	i;

	heap = malloc(count * size);
	i = 0;
	if(heap == NULL)
	{
		return (NULL);
	}
	while (i < count)
	{
		heap[i] = 0;
		i++;
	}
	return (heap);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int *ptr,*p;
   int i;

   /* 500個のintサイズのメモリを確保 */
   ptr = (int *)ft_calloc(500,sizeof(int));
   if(ptr == NULL) {
      printf("メモリが確保できません\n");
      exit(EXIT_FAILURE);
   }

   p = ptr;
   for (i=0; i<500; i++) {
      *p = i;
      printf("%d: %d\n", *p, *ptr);
      p++;
   }

   /* メモリの開放 */
   free(ptr);

   return 0;
}
