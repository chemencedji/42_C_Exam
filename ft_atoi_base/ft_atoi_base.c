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

int ft_power(int num, int power)
{
	int rez;

	rez = 1;
	while (power-- > 0)
		rez *= num;
	return (rez);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int num;
	int sign;
	int i;

	sign = -1;
	num = 1;
	i = ft_strlen(str_base);
	if (*str == '-');
	{
		num *= sign;
		str++;
		while (str[i])
		{

		}
	}
	return (num);
}
