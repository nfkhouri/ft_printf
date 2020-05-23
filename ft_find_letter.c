/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_letter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:39:07 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:04:30 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_find_letter(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%' || str[i] == 'c' || str[i] == 's' || str[i] == 'u'
			|| str[i] == 'p' || str[i] == 'd' || str[i] == 'i'
			|| str[i] == 'x' || str[i] == 'X')
			return (i);
		else if (ft_isdigit(str[i]) || str[i] == '.' || str[i] == '-'
			|| str[i] == '*')
			i++;
		else
			break ;
	}
	return (-1);
}
