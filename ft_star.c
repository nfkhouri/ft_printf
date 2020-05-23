/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_star.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:35:49 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:05:17 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_star(t_pf *det)
{
	int		star;
	int		i;
	char	*flag1;
	char	*temp1;
	char	*temp2;

	i = 0;
	flag1 = det->flag;
	while ((star = ft_find_char(det->flag, '*')) >= 0 && i < 2)
	{
		det->temp = va_arg(det->ap, int);
		temp1 = ft_substr(det->flag, 0, star);
		temp2 = ft_itoa(det->temp);
		flag1 = ft_strjoin(temp1, temp2);
		free(temp1);
		free(temp2);
		temp1 = ft_substr(det->flag, star + 1, ft_strlen(det->flag));
		det->flag = ft_strjoin(flag1, temp1);
		free(flag1);
		free(temp1);
		i++;
	}
	if ((ft_find_char(det->flag, '*')) >= 0)
		return (-1);
	return (0);
}
