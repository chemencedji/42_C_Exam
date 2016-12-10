/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:34:34 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/05 15:13:35 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

void	ft_rot(char *str)
{
	char	c;
	char	*st;
	int 	i;

	st = str;
	while (*str)
	{
		c = *str;
		if ((c >= 65 && c <= 77) || (c >= 97 && c <= 109))
			*str = c + 13;
		if ((c >= 78 && c <= 90) || (c >= 110 && c <= 122))
		{
			i = 0;
			while (c <= 90 || c <= 122)
			{
				c++;
				i++;
			}
			if (c == 90)
				*str = 'A' + (13 - i);
			else
				*str = 'a' + (13 - i);
		}
		str++;
	}
	ft_putstr(st);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rot(argv[1]);
	}
	ft_putstr("\n");
	return (0);
}
