/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 17:58:48 by ichemenc          #+#    #+#             */
/*   Updated: 2016/12/19 18:21:38 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_power(int num, int power)
{
	int rez;

	rez = 1;
	while (power-- > 0)
		rez *= num;
	return (rez);
}

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_ascii(char c)
{
	if(c == 65 || c == 97)
		return 10;
	if(c == 66 || c == 98)
		return 11;
	if(c == 67 || c == 99)
		return 12;
	if(c == 68 || c == 100)
		return 13;
	if(c == 69 || c == 101)
		return 14;
	if(c == 70 || c == 102)
		return 15;
	return (1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int num;
	int flag;
	int i;
	int j;
	int f;

	flag = 0;
	num = 0;
	f = 0;
	i = ft_strlen(str);
	if (*str == '-')
	{
		flag = 1;
		j = 1;
		while (i-- > j)
		{
			if (str_base > 9 && str_base < 17)
			{
				if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] < 122))
					num += ft_ascii(str[i]) * ft_power(str_base, f);
			}
			else if (str[i] >= 48 && str[i] <= 57)
			{
				num += (str[i] - 48) * ft_power(str_base, f);
			}
			f++;	
		}
	}
	else
	{
		j = 0;
		while (i-- > j)
		{
			if (str_base > 9 && str_base < 17)
			{
				if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] < 122))
					num += ft_ascii(str[i]) * ft_power(str_base, f);
			}
			else if ( (str[i] >= 48 && str[i] <= 57))
			{
				num += (str[i] - 48) * ft_power(str_base, f);
			}
			f++;	
		}
	}
	if (flag == 0)
		return (num);
	else
		return (num * (-1));
}

int main(void)
{
	printf("Convertor in baza 10> %d\n", ft_atoi_base("-Abcd", 16));
	return (0);
}
