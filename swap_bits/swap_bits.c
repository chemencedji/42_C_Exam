/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichemenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 14:10:55 by ichemenc          #+#    #+#             */
/*   Updated: 2016/12/03 14:15:10 by ichemenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	char rev;

	rev = octet;
	rev = rev<<4;
	octet = octet>>4;
	return (rev + octet);
}
