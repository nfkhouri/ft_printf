/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:37:45 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_p_formatting(t_pf *det, int len)
{
	if (det->width < det->precision)
	{
		if (det->precision > len)
			det->total += det->precision + 2;
		else
			det->total += len;
	}
	else
	{
		det->total += det->spaces + len;
	}
}

int			ft_printf_p(t_pf *det)
{
	size_t	num;
	char	*number;
	int		len;
	char	*temp;

	ft_padding(det);
	num = va_arg(det->ap, size_t);
	number = ft_itoa_base(num, 16, 'a', det);
	if (det->precision > ft_strlen(number))
		len = ft_strlen(number);
	else if (det->precision == 0 && num == 0)
		len = 2;
	else
		len = ft_strlen(number) + 2;
	temp = number;
	number = det->precision == 0 && num == 0 ? "" : number;
	ft_int_formatting(det, len, len);
	ft_p_formatting(det, len);
	ft_print_pointer(det, number);
	free(temp);
	return (0);
}
