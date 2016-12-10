/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:50:13 by ichemenc          #+#    #+#             */
/*   Updated: 2016/12/03 13:58:41 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_printstr(char *str)
{
	while(*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

int				main(int argc, char **argv)
{
	char *str;
	int ret;

	ret = argc - 1;
	if (ret > 0)
	{
		str = argv[ret];
		ft_printstr(str);
	}
	write (1, "\n", 1);
	return (1);
}
