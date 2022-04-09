/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:23:29 by ktakada           #+#    #+#             */
/*   Updated: 2021/10/14 17:23:32 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	long long	abs;
	size_t		i;
	int			sign;

	abs = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1)
		abs = (abs * 10) + (str[i++] - '0');
	return (abs * sign);
}

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
void	test1_signed_case(void);
void	test2_space_case(void);
void	test3_not_number_case(void);
void	test4_paddidng_between_number(void);
void	test5_over_int_case(void);
void	test6_null_case(void);
int main(void)
{
	test1_signed_case();
	test2_space_case();
	test3_not_number_case();
	test4_paddidng_between_number();
	test5_over_int_case();
	test6_null_case();
	return 0;
}
void	test1_signed_case(void)
{
	printf("///test1_signed_case///\n");
	if ((atoi("+123") == ft_atoi("+123")) && (atoi("-123") == ft_atoi("-123"))
			&& (atoi("-+123") == ft_atoi("-+123"))
				&& (atoi("+-123") == ft_atoi("+-123")))
	{
		printf("%s => %d\n", "+123",	ft_atoi("+123"));
		printf("%s => %d\n", "-123",	ft_atoi("-123"));
		printf("%s => %d\n", "-+123",	ft_atoi("-+123"));
		printf("%s => %d\n", "+-123",	ft_atoi("+-123"));
		printf("OK :)\n\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}
void	test2_space_case(void)
{
	printf("///test2_space_case///\n");
	if ((atoi("     +123") == ft_atoi("     +123"))
		&& (atoi("     +  123") == ft_atoi("     +  123"))
			&& (atoi("     -123") == ft_atoi("     -123"))
				&& (atoi("     -  123") == ft_atoi("     -  123"))
					&& (atoi("\t\v\f\r\n \f-006050") ==
						ft_atoi("\t\v\f\r\n \f-006050")))
	{
		printf("%s => %d\n", "     +123", ft_atoi("     +123"));
		printf("%s => %d\n", "     +  123", ft_atoi("     +  123"));
		printf("%s => %d\n", "     -123", ft_atoi("     -123"));
		printf("%s => %d\n", "     -  123", ft_atoi("     -  123"));
		printf("%s => %d\n", "\t\v\f\r\n \f-006050", ft_atoi("\t\v\f\r\n \f-006050"));
		printf("OK :)\n\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}
void	test3_not_number_case(void)
{
	printf("///test3_not_number_case///\n");
	if ((atoi("XYZ") == ft_atoi("XYZ")) && (atoi("5G") == ft_atoi("5G"))
		&& (atoi("G5") == ft_atoi("G5")))
	{
		printf("%s => %d\n", "XYZ",		ft_atoi("XYZ"));
		printf("%s => %d\n", "5G",		ft_atoi("5G"));
		printf("%s => %d\n", "G5",		ft_atoi("G5"));
		printf("OK :)\n\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}
void	test4_paddidng_between_number(void)
{
	printf("///test4_paddidng_between_number///\n");
	if ((atoi("3.14") == ft_atoi("3.14")) && (atoi("1 2 3") == ft_atoi("1 2 3"))
		&& (atoi("1,2,3") == ft_atoi("1,2,3"))
			&& (atoi("+12+3") == ft_atoi("+12+3"))
				&& (atoi("-1-2-3") == ft_atoi("-1-2-3")))
	{
		printf("%s => %d\n", "3.14",	ft_atoi("3.14"));
		printf("%s => %d\n", "1 2 3",	ft_atoi("1 2 3"));
		printf("%s => %d\n", "1,2,3",	ft_atoi("1,2,3"));
		printf("%s => %d\n", "+12+3",	ft_atoi("+12+3"));
		printf("%s => %d\n", "-1-2-3",	ft_atoi("-1-2-3"));
		printf("OK :)\n\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}
void	test5_over_int_case(void)
{
	printf("///test5_over_int_case///\n");
	char	int_max_minus_1[] = "2147483646";
	char	int_max[] = "2147483647";
	char	int_max_plus_1[] = "2147483648";
	char	int_min_plus_1[] = "-2147483647";
	char	int_min[] = "-2147483648";
	char	int_min_minus_1[] = "-2147483649";
	char	long_max_minus_1[] = "9223372036854775806";
	char	long_max[] = "9223372036854775807";
	char	long_min_plus_1[] = "-9223372036854775807";
	char	long_min[] = "-9223372036854775808";
	// char	long_max_plus_1[] = "9223372036854775808";
	// char	long_min_minus_1[] = "-9223372036854775809";
	// char	huge_plus[] = "9999999999999999999999999999";
	// char	huge_minus[] = "-9999999999999999999999999999";

	if ((atoi(int_max_minus_1) == ft_atoi(int_max_minus_1))
		&& (atoi(int_max) == ft_atoi(int_max))
			&& (atoi(int_max_plus_1) == ft_atoi(int_max_plus_1)))
	{
		printf("%s (INT_MAX - 1) => %d\n",
			int_max_minus_1, ft_atoi(int_max_minus_1));
		printf("%s (INT_MAX) => %d\n", int_max, ft_atoi(int_max));
		printf("%s (INT_MAX + 1) => %d\n",
			int_max_plus_1, ft_atoi(int_max_plus_1));
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	if ((atoi(int_min_plus_1) == ft_atoi(int_min_plus_1))
		&& (atoi(int_min) == ft_atoi(int_min))
			&& (atoi(int_min_minus_1) == ft_atoi(int_min_minus_1)))
	{
		printf("%s (INT_MIN + 1) => %d\n",
			int_min_plus_1, ft_atoi(int_min_plus_1));
		printf("%s (INT_MIN) => %d\n", int_min, ft_atoi(int_min));
		printf("%s (INT_MIN - 1) => %d\n",
			int_min_minus_1, ft_atoi(int_min_minus_1));
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	if ((atoi(long_max_minus_1) == ft_atoi(long_max_minus_1))
		&& (atoi(long_max) == ft_atoi(long_max))
			&& (atoi(long_min_plus_1) == ft_atoi(long_min_plus_1))
				&& (atoi(long_min) == ft_atoi(long_min)))
	{
		printf("%s (LONG_MAX - 1) => %d\n",
			long_max_minus_1, ft_atoi(long_max_minus_1));
		printf("%s (LONG_MAX) => %d\n", long_max, ft_atoi(long_max));
		printf("%s (LONG_MIN + 1) => %d\n",
			long_min_plus_1, ft_atoi(long_min_plus_1));
		printf("%s (LONG_MIN) => %d\n", long_min, ft_atoi(long_min));
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	// if ((atoi(long_max_plus_1) == ft_atoi(long_max_plus_1))
	// 	&& (atoi(long_min_minus_1) == ft_atoi(long_min_minus_1))
	// 		&& (atoi(huge_plus) == ft_atoi(huge_plus))
	// 			&& (atoi(huge_minus) == ft_atoi(huge_minus)))
	// {
	// 	printf("%s (LONG_MAX + 1) => %d\n",
	// 		long_max_plus_1, atoi(long_max_plus_1));
	// 	printf("%s (LONG_MAX + 1) => %d\n",
	// 		long_max_plus_1, ft_atoi(long_max_plus_1));
	// 	printf("%s (LONG_MIN - 1) => %d\n",
	// 		long_min_minus_1, atoi(long_min_minus_1));
	// 	printf("%s (LONG_MIN - 1) => %d\n",
	// 		long_min_minus_1, ft_atoi(long_min_minus_1));
	// 	printf("%s => %d\n", huge_plus, atoi(huge_plus));
	// 	printf("%s => %d\n", huge_plus, ft_atoi(huge_plus));
	// 	printf("%s => %d\n", huge_minus, atoi(huge_minus));
	// 	printf("%s => %d\n", huge_minus, ft_atoi(huge_minus));
	// }
	// else
	// {
	// 	printf("NG :(\n");
	// 	exit (0);
	// }
	printf("OK :)\n");
	return ;
}
void	test6_null_case(void)
{
	printf("\n///test6_null_case///\n");
	printf("**str NULL case is SEGV**\n");
	atoi(NULL);
	ft_atoi(NULL);
	return ;
}
*/
