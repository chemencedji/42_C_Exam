/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:17:05 by ichemenc          #+#    #+#             */
/*   Updated: 2016/11/30 18:18:35 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_swap(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
