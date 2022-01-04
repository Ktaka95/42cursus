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

int				count_len(char *str);

int				plus_minus_judge(char *str, int n);

int				int_changer(char chr);

int	ft_atoi(char *str)
{
	int				i;
	int				plus_or_minus;
	int				num;

	i = 0;
	plus_or_minus = 1;
	num = 0;
	while (str[i] == ' ')
		i++;
	plus_or_minus = plus_minus_judge(str, i);
	while (i < count_len(str))
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
	return (num * plus_or_minus);
}

int	count_len(char *str)
{
	int	k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

int	int_changer(char chr)
{
	int	num_tmp;

	num_tmp = chr - '0';
	return (num_tmp);
}

int	plus_minus_judge(char *str, int n)
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
	printf("%s => %d\n", "    1",	atoi("    1"));
	printf("%s => %d\n", "    1",	ft_atoi("    1"));
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

	return 0;
}
*/
