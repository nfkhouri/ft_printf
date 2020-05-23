/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:52:24 by gadoglio          #+#    #+#             */
/*   Updated: 2020/05/22 16:23:26 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sr;

	dest = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (dest == sr)
		return (dest);
	i = 0;
	while (i < n)
	{
		dest[i] = sr[i];
		i++;
	}
	return (dest);
}
