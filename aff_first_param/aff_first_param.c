/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:23:22 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/05 13:30:09 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
