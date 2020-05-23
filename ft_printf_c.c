/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:37:54 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_c(t_pf *det)
{
	char	c;
	int		i;

	i = 0;
	c = (char)va_arg(det->ap, char *);
	if (det->width != -1)
	{
		if (det->width > 1)
			det->spaces = det->width - 1;
	}
	if (det->side == 1)
	{
		ft_putchar_fd(c, 1);
		while (i++ < det->spaces)
			ft_putchar_fd(' ', 1);
	}
	else if (det->side == 0)
	{
		while (i++ < det->spaces)
			ft_putchar_fd(' ', 1);
		ft_putchar_fd(c, 1);
	}
	det->total += 1 + det->spaces;
	return (0);
}
