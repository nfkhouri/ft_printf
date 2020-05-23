/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:37:13 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:11:11 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_x(t_pf *det)
{
	size_t	num;
	char	*number;
	int		len;

	ft_padding(det);
	num = va_arg(det->ap, size_t);
	if (num < 0)
	{
		det->negative = 1;
		num = num * -1;
		det->total++;
	}
	if (det->conversion == 'x')
		number = ft_itoa_base(num, 16, 'a', det);
	else
		number = ft_itoa_base(num, 16, 'A', det);
	len = det->precision == 0 && number[0] == '0' ? 0 : ft_strlen(number);
	ft_int_formatting(det, len, len);
	ft_print_int(det, number);
	det->total += ft_strlen(number) + det->prec_zeros + det->spaces;
	return (0);
}
