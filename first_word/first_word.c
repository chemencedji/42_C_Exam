/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:46:29 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/12 14:33:45 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_word(char *buf)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (buf[i])
	{
		while (buf[i] > 32 && buf[i] < 127)
		{
			write (1, &buf[i], 1);
			i++;
			c++;
		}
		if (c > 0)
			break ;
		i++;
	}
	write (1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_word(argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
