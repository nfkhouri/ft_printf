/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:39:25 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:04:37 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_conversion(t_pf *det)
{
	if (det->conversion == 's')
		ft_printf_s(det);
	else if (det->conversion == 'c')
		ft_printf_c(det);
	else if (det->conversion == 'd' || det->conversion == 'i')
		ft_printf_d(det);
	else if (det->conversion == 'p')
		ft_printf_p(det);
	else if (det->conversion == 'u')
		ft_printf_u(det);
	else if (det->conversion == '%')
		ft_printf_percent(det);
	else if (det->conversion == 'x' || det->conversion == 'X')
		ft_printf_x(det);
	return (0);
}
