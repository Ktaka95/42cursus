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
	s = "2147483648";
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
	s = "4294967296";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);           //  0           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);           //  0           //
	printf("%d\n", i);

	s = "-4294967297";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);           //  1           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);           //  1           //
	printf("%d\n", i);


	printf("\n整数オーバーフロー・アンダーフロー（long型の範囲外）\n");
	s = "9223372036854775808";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s);  // -1           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s);  // -1           //
	printf("%d\n", i);

	s = "-9223372036854775809";
	printf("引数[%s]: atoi→ ", s);
	i = atoi(s); //  0           //
	printf("%d\n", i);

	printf("引数[%s]: ft_atoi→ ", s);
	i = ft_atoi(s); //  0           //
	printf("%d\n", i);
	return (0);
}
