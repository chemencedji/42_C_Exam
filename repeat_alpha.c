/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:32:52 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/12 14:45:13 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat(char c)
{
	char r;

	r = c;
	while ((r > 'a' && r <= 'z') || (r > 'A' && r <= 'Z'))
	{
		write(1, &c, 1);
		r--;
	}
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		if ((*str > 'a' && *str <= 'z') || (*str > 'A' && *str <= 'Z'))
			ft_repeat(*str);
		write(1, &(*str), 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
