/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:38:05 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_right(t_pf *det, char *number, int i)
{
	if (det->padding == '0')
	{
		if (det->negative > 0)
			ft_putchar_fd('-', 1);
	}
	while (i++ < det->spaces)
		ft_putchar_fd(det->padding, 1);
	if (det->padding == ' ')
	{
		if (det->negative > 0)
			ft_putchar_fd('-', 1);
	}
	ft_put_zero(det->prec_zeros);
	ft_putstr_fd(number, 1);
}

int		ft_print_int(t_pf *det, char *number)
{
	int	i;

	i = 0;
	if (det->precision == 0 && number[0] == '0')
	{
		number = "";
		det->total--;
	}
	if (det->side == 1)
	{
		if (det->negative > 0)
			ft_putchar_fd('-', 1);
		ft_put_zero(det->prec_zeros);
		ft_putstr_fd(number, 1);
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
	}
	else if (det->side == 0)
		ft_right(det, number, i);
	return (0);
}
