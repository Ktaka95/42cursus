#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	int	i = 0;
	char	*s;
	printf("変換不可能の場合(引数char)\n");
	s = "a";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);                    //  0           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);                    //  0           //
	printf("%d\n", i);
	printf("\n整数オーバーフロー・アンダーフロー（int型の範囲外）\n");
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	s = "6442450945";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);           // -2147483648  //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);           // -2147483648  //
	printf("%d\n", i);

	s = "-2147483649";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);          //  2147483647  //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);          //  2147483647  //
	printf("%d\n", i);


	printf("\n整数オーバーフロー・アンダーフロー（unsigned int型の範囲外）\n");
	printf("%u\n", UINT_MAX);
	s = "4294967295";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);           //  0           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);           //  0           //
	printf("%d\n", i);

	s = "-6442450946";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);           //  1           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);           //  1           //
	printf("%d\n", i);


	printf("\n整数オーバーフロー・アンダーフロー（long型の範囲外）\n");
	printf("%ld\n", LONG_MAX);
	printf("%ld\n", LONG_MIN);

	s = "9223372036854775809";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);  // -1           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);  // -1           //
	printf("%d\n", i);

	s = "-9223372036854775810";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s); //  0           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s); //  0           //
	printf("%d\n", i);
	return (0);
}
