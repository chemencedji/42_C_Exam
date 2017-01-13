/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:53:22 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/14 19:46:11 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int ret;
	int sign;
	int i;

	i = 0;
	sign = 1;
	ret = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	return (ret * sign);
}

void	ft_nub(int nb)
{
	int m[10];
	int i;
	int sgn;

	sgn = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		sgn = (-1);
	}
	if (nb == 0)
		ft_putchar('0');
	i = 0;
	while (nb != 0)
	{
		m[i] = sgn * (nb % 10);
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(m[i] + 48);
		i--;
	}
}

void	ft_print(int x)
{
	int i;
	int j;
	int arr[9];

	i = 1;
	j = 0;
	while(i < 10)
	{
		arr[j++] = i * x;
		i++;
	}
	i = 1;
	j = 0;
	while (i < 10)
	{
		ft_nub(i);
		write (1, " ", 1);
		write (1, "x", 1);
		write (1, " ", 1);
		ft_nub(x);
		write (1, " ", 1);
		write (1, "=", 1);
		write (1, " ", 1);
		ft_nub(arr[j++]);
		write (1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (argc > i)
	{
		while (argc > i)
		{
			ft_print(ft_atoi(argv[i]));
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
