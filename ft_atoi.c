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

static int		ft_isspace(int c);

static int		plus_minus_judge(const char *str, int n);

static int		int_changer(char chr);

int	ft_atoi(const char *str)
{
	size_t			i;
	int				plus_or_minus;
	size_t			num;

	i = 0;
	plus_or_minus = 1;
	num = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	plus_or_minus = plus_minus_judge(str, i);
	while (i < ft_strlen(str))
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if ('0' <= str[i + 1] && str [i + 1] <= '9')
				i++;
		}
		if ('0' <= str[i] && str[i] <= '9')
			num = num * 10 + int_changer(str[i]);
		else
			break ;
		i++;
	}
	return ((int)num * plus_or_minus);
}

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	int_changer(char chr)
{
	int	num_tmp;

	num_tmp = chr - '0';
	return (num_tmp);
}

int	plus_minus_judge(const char *str, int n)
{
	int	ret;

	ret = 1;
	if (str[n] == '+' || str[n] == '-')
	{
		if ('0' <= str[n + 1] && str [n + 1] <= '9')
		{
			if (str[n] == '-')
				ret = -1;
		}
	}
	return (ret);
}

/*
#include <stdio.h>
#include <stdlib.h>

void	test1_signed_case(void);
void	test2_space_case(void);
void	test3_not_number_case(void);
void	test4_paddidng_between_number(void);
void	test5_over_int_case(void);

int main(void)
{
	test1_signed_case();
	test2_space_case();
	test3_not_number_case();
	test4_paddidng_between_number();
	test5_over_int_case();
	printf("OK :)\n");
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
					&& (atoi("\t\v\f\r\n \f-06050") == ft_atoi("\t\v\f\r\n \f-06050")))
	{
		printf("%s => %d\n", "     +123",	ft_atoi("     +123"));
		printf("%s => %d\n", "     +  123",	ft_atoi("     +  123"));
		printf("%s => %d\n", "     -123",	ft_atoi("     -123"));
		printf("%s => %d\n", "     -  123",	ft_atoi("     -  123"));
		printf("%s => %d\n", "\t\v\f\r\n \f-06050",	ft_atoi("\t\v\f\r\n \f-06050"));
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
		&& (atoi("1,2,3") == ft_atoi("1,2,3")))
	{
		printf("%s => %d\n", "3.14",	ft_atoi("3.14"));
		printf("%s => %d\n", "1 2 3",	ft_atoi("1 2 3"));
		printf("%s => %d\n", "1,2,3",	ft_atoi("1,2,3"));
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
		printf("%s => %d\n", int_max_minus_1, ft_atoi(int_max_minus_1));
		printf("%s => %d\n", int_max, ft_atoi(int_max));
		printf("%s => %d\n", int_max_plus_1, ft_atoi(int_max_plus_1));
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
		printf("%s => %d\n", int_min_plus_1, ft_atoi(int_min_plus_1));
		printf("%s => %d\n", int_min, ft_atoi(int_min));
		printf("%s => %d\n", int_min_minus_1, ft_atoi(int_min_minus_1));
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
		printf("%s => %d\n", long_max_minus_1, ft_atoi(long_max_minus_1));
		printf("%s => %d\n", long_max, ft_atoi(long_max));
		printf("%s => %d\n", long_min_plus_1, ft_atoi(long_min_plus_1));
		printf("%s => %d\n", long_min, ft_atoi(long_min));
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
	// 	printf("%s => %d\n", long_max_plus_1, atoi(long_max_plus_1));
	// 	printf("%s => %d\n", long_max_plus_1, ft_atoi(long_max_plus_1));
	// 	printf("%s => %d\n", long_min_minus_1, atoi(long_min_minus_1));
	// 	printf("%s => %d\n", long_min_minus_1, ft_atoi(long_min_minus_1));
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
	return ;
}
*/
