#include <stdio.h>
#include <string.h>

char	*ft_strdup(char	*src);

int	main(void)
{
	char	*p;
	char	*q;
	char	str1[] = "Hello, World";
	char	str2[] = "Hello, World";

	p = strdup(str1);
	q = ft_strdup(str2);

	str1[5] = '!';
	str2[5] = '!';

	printf("Expected_Output\n");
	printf("%s\n",str1);
	printf("%s\n",p);
	printf("--------------------\n");
	printf("Actual_Output\n");
	printf("%s\n",str2);
	printf("%s\n",q);
	return (0);
}
