/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:39:17 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:04:34 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_count_args(char *str)
{
	int		i;
	int		j;
	char	*temp;
	int		args;

	i = 0;
	args = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			temp = ft_substr(str, i + 1, ft_strlen(str));
			j = ft_find_letter(temp) + 1;
			if (j < 0)
				return (-1);
			args++;
			i += j;
			free(temp);
		}
		i++;
	}
	return (args);
}
