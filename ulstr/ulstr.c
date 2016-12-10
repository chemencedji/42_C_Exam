/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:37:20 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/03 21:04:33 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, &(*str), 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_reverse(char* str)
{
	int i;
	char c;

	i = -1;
	while (str[++i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			str[i] = c - 32;
		if (c >= 'A' && c <= 'Z')
			str[i] = c + 32;
	}
	ft_putstr(str);
}

int		main(int argc, char** argv)
{
	if (argc == 2)
	{
		ft_reverse(&argv[1][0]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
