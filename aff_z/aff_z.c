/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:25:37 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/03 20:33:48 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char** argv)
{
	if (argc > 0 && argv[0][0])
	{
		write(1, "z", 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "z", 1);
		write(1, "\n", 1);
	}
	return (0);
}
