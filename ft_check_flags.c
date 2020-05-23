/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:39:51 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:14:31 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_check_flags(t_pf *det)
{
	int		i;
	char	*temp;

	i = 0;
	if (ft_star(det) < 0)
		return (-1);
	if (ft_negative(det) < 0)
		return (-1);
	while (det->flag[i] == '0' || det->flag[i] == '-')
		i++;
	temp = det->flag;
	det->flag = ft_substr(det->flag, i, ft_strlen(det->flag));
	free(temp);
	if (ft_width(det) < 0)
		return (-1);
	if (ft_precision(det) < 0)
		return (-1);
	ft_conversion(det);
	return (0);
}
