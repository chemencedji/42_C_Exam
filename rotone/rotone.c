/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:37:00 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/14 18:47:57 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev(char *str)
{
	char c;

	while(*str)
	{
		c = *str;
		if((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
		{
			c += 1;
			write (1, &c, 1);
		}
		else if (c == 'z' || c == 'Z')
		{
			c -= 25;
			write (1, &c, 1);
		}
		else
			write (1, &c, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
