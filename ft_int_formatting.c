/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_formatting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:38:54 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:04:18 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_int_formatting(t_pf *det, int len, int i)
{
	if (det->precision >= 0)
	{
		if (det->precision > len)
		{
			det->prec_zeros = det->precision - len;
			i = det->precision;
		}
	}
	if (det->width != -1)
	{
		if (det->width > len && det->width > det->precision)
		{
			det->spaces = det->width - i;
			if (det->negative > 0)
				det->spaces--;
		}
	}
	return (0);
}
