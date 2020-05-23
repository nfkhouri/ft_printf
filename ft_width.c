/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:35:40 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_width(t_pf *det)
{
	int		idx;
	char	*temp;

	idx = ft_find_char(det->flag, '.');
	if (idx < 0)
		idx = det->idx_letter;
	if (idx == 0)
		return (0);
	temp = ft_substr(det->flag, 0, idx);
	det->width = ft_atoi(temp);
	free(temp);
	return (0);
}
