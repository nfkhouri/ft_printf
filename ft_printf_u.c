/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:37:24 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_printf_u(t_pf *det)
{
	unsigned int		num;
	char				*number;
	int					len;

	ft_padding(det);
	num = va_arg(det->ap, unsigned int);
	number = ft_itoa_u(num, 10, 'a');
	len = det->precision == 0 && num == 0 ? 0 : ft_strlen(number);
	ft_int_formatting(det, len, len);
	ft_print_int(det, number);
	det->total += ft_strlen(number) + det->prec_zeros + det->spaces;
	free(number);
	return (0);
}
