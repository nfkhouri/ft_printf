/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:37:50 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_d(t_pf *det)
{
	long	num;
	char	*number;
	int		len;

	ft_padding(det);
	num = va_arg(det->ap, int);
	if (num < 0)
	{
		det->negative = 1;
		num = num * -1;
		det->total++;
	}
	number = ft_itoa(num);
	len = det->precision == 0 && num == 0 ? 0 : ft_strlen(number);
	ft_int_formatting(det, len, len);
	ft_print_int(det, number);
	det->total += ft_strlen(number) + det->prec_zeros + det->spaces;
	free(number);
	return (0);
}
