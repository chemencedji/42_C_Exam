/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 13:41:55 by ichemenc          #+#    #+#             */
/*   Updated: 2016/12/10 14:42:07 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	unsigned int i;
	int rez;

	i = 0;
	rez = 0;
	if (len == 0)
		return (0);
	else
	{
		rez = tab[i];
		while(len > ++i)
		{
			if (tab[i] > rez)
				rez = tab[i];
		}
		return (rez);
	}
}
