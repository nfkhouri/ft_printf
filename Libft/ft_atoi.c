/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:19:55 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:20:08 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isaccept(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f'
		|| c == '\r') ? 1 : 0;
}

int				ft_atoi(const char *nptr)
{
	long int	unidade;
	int			i;
	int			sinal;

	i = 0;
	while (ft_isaccept(*(nptr + i)))
		i++;
	sinal = 1;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sinal = -1;
		i += 1;
	}
	unidade = 0;
	while (*(nptr + i) >= 48 && *(nptr + i) <= 57)
	{
		unidade = unidade * 10 + *(nptr + i) - 48;
		if (unidade > 2147483648 && sinal == 1)
			return (-1);
		else if (unidade > 2147483648 && sinal == -1)
			return (0);
		i++;
	}
	return (unidade * sinal);
}
