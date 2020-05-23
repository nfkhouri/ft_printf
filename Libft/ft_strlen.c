/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:19:06 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:19:11 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strlen(const char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (str[i++] != '\0')
	{
		length++;
	}
	return (length);
}
