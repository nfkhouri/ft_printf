/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:38:23 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_negative(t_pf *det)
{
	int		i;
	char	*temp;

	i = 0;
	if (det->flag[0] == '0')
	{
		det->zero = 1;
		i++;
	}
	while (det->flag[i] == '-')
	{
		det->side = 1;
		det->zero = 0;
		i++;
	}
	temp = det->flag;
	det->flag = ft_substr(det->flag, i, ft_strlen(det->flag));
	free(temp);
	return (0);
}
