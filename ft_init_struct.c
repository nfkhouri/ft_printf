/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:38:59 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 18:59:48 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_struct(t_pf *det)
{
	det->idx_percent = 0;
	det->idx_letter = 0;
	det->flag = "";
	det->conversion = 'a';
	det->temp = 0;
	det->side = 0;
	det->width = 0;
	det->precision = -1;
	det->padding = ' ';
	det->zero = 0;
	det->spaces = 0;
	det->prec_zeros = 0;
	det->negative = 0;
}
