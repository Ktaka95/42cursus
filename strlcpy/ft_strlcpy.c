#include <string.h>
#include <stdio.h>

int	main()
{
	char s[4] = {'-', '-', '-', '-'};
	strlcpy(s, "abc", 3);
	int	i;

	i = 0;
	while (s[i])
	{
		printf("%c", s[i]);
		i++;
	}
	printf ("\n");
	printf ("%c", s[2]);
	printf ("\n");
	printf ("%c", s[3]);
	return (0);
}
