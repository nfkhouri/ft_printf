/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:37:30 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_s_formatting(t_pf *det, int len)
{
	if (det->precision >= 0)
	{
		if (det->precision < len)
			len = det->precision;
	}
	if (det->width != -1)
	{
		if (det->width > len)
			det->spaces = det->width - len;
	}
	return (len);
}

void		ft_s_printing(t_pf *det, char *temp)
{
	int		i;

	i = 0;
	if (det->side == 1)
	{
		ft_putstr_fd(temp, 1);
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
	}
	else if (det->side == 0)
	{
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
		ft_putstr_fd(temp, 1);
	}
}

int			ft_printf_s(t_pf *det)
{
	char	*str;
	char	*temp;
	int		len;

	str = va_arg(det->ap, char *);
	if (!str)
		str = ft_substr("(null)", 0, 6);
	len = ft_strlen(str);
	ft_padding(det);
	len = ft_s_formatting(det, len);
	temp = ft_substr(str, 0, len);
	ft_s_printing(det, temp);
	det->total += ft_strlen(temp) + det->spaces;
	free(temp);
	return (0);
}
