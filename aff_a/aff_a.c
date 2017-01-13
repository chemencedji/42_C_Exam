/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:15:34 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/14 18:29:04 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check(char *c)
{
	while(*c)
	{
		if (*c == 'a')
		{
			write(1, "a",1);
			break ;
		}
		c++;
	}
}

int		main(int argc, char** argv)
{
	if (argc == 2)
		ft_check(argv[1]);
	if (argc > 2 || argc == 1)
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
