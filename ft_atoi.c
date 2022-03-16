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

int				ft_isspace(int c);

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

int main(void)
{
	char	n[40] = "99999999999999999999999999";
	char	n2[40] = "-99999999999999999999999999";

	printf("%s => %d\n", "+123",	atoi("+123"));
	printf("%s => %d\n", "+123",	ft_atoi("+123"));
	printf("%s => %d\n", "-123",	atoi("-123"));
	printf("%s => %d\n", "-123",	ft_atoi("-123"));
	printf("%s => %d\n", "2147483647",	atoi("2147483647"));
	printf("%s => %d\n", "2147483647",	ft_atoi("2147483647"));
	printf("%s => %d\n", "-2147483648",	atoi("-2147483648"));
	printf("%s => %d\n", "-2147483648",	ft_atoi("-2147483648"));
	printf("%s => %d\n", "2147483648",	atoi("2147483648"));
	printf("%s => %d\n", "2147483648",	ft_atoi("2147483648"));
	printf("%s => %d\n", "-2147483649",	atoi("-2147483649"));
	printf("%s => %d\n", "-2147483649",	ft_atoi("-2147483649"));
	printf("%s => %d\n", "3.14",	atoi("3.14"));
	printf("%s => %d\n", "3.14",	ft_atoi("3.14"));
	printf("%s => %d\n", "XYZ",		atoi("XYZ"));
	printf("%s => %d\n", "XYZ",		ft_atoi("XYZ"));
	printf("%s => %d\n", "5G",		atoi("5G"));
	printf("%s => %d\n", "5G",		ft_atoi("5G"));
	printf("%s => %d\n", "G5",		atoi("G5"));
	printf("%s => %d\n", "G5",		ft_atoi("G5"));
	printf("%s => %d\n", "1 2 3",	atoi("1 2 3"));
	printf("%s => %d\n", "1 2 3",	ft_atoi("1 2 3"));
	printf("%s => %d\n", "\t\v\f\r\n \f-06050",	atoi("\t\v\f\r\n \f-06050"));
	printf("%s => %d\n", "\t\v\f\r\n \f-06050",	ft_atoi("\t\v\f\r\n \f-06050"));
	printf("%s => %d\n", "1,2,3",	atoi("1,2,3"));
	printf("%s => %d\n", "1,2,3",	ft_atoi("1,2,3"));
	printf("%s => %d\n", "-+123",	atoi("-+123"));
	printf("%s => %d\n", "-+123",	ft_atoi("-+123"));
	printf("%s => %d\n", "+-123",	atoi("+-123"));
	printf("%s => %d\n", "+-123",	ft_atoi("+-123"));
	printf("%s => %d\n", "     +123",	atoi("     +123"));
	printf("%s => %d\n", "     +123",	ft_atoi("     +123"));
	printf("%s => %d\n", "     +  123",	atoi("     +  123"));
	printf("%s => %d\n", "     +  123",	ft_atoi("     +  123"));
	printf("%s => %d\n", "     -123",	atoi("     -123"));
	printf("%s => %d\n", "     -123",	ft_atoi("     -123"));
	printf("%s => %d\n", "     -  123",	atoi("     -  123"));
	printf("%s => %d\n", "     -  123",	ft_atoi("     -  123"));
	printf("%s => %d\n", n,	atoi(n));
	printf("%s => %d\n", n,	ft_atoi(n));
	printf("%s => %d\n", n2,	atoi(n2));
	printf("%s => %d\n", n2,	ft_atoi(n2));

	return 0;
}
*/
