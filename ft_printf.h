/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 14:36:05 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 17:18:52 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "Libft/libft.h"

typedef struct	s_params
{
	va_list		ap;
	int			idx_percent;
	int			idx_letter;
	int			temp;
	int			side;
	int			width;
	int			precision;
	int			zero;
	char		*flag;
	char		conversion;
	char		padding;
	int			spaces;
	int			prec_zeros;
	int			total;
	int			negative;
}				t_pf;

int				ft_printf(const char *str, ...);
int				ft_find_letter(char *str);
int				ft_find_percent(char *str);
int				ft_find_char(char *str, char c);
int				ft_check_flags(t_pf *det);
int				ft_star(t_pf *det);
int				ft_negative(t_pf *det);
int				ft_width(t_pf *det);
int				ft_precision(t_pf *det);
void			ft_init_struct(t_pf *det);
int				ft_padding(t_pf *det);
int				ft_conversion(t_pf *det);
int				ft_printf_s(t_pf *det);
int				ft_printf_c(t_pf *det);
int				ft_printf_d(t_pf *det);
void			ft_put_zero(int n);
int				ft_print_int(t_pf *det, char *number);
int				ft_int_formatting(t_pf *det, int len, int i);
char			*ft_itoa_base(size_t nb, int base, char updown, t_pf *det);
int				ft_printf_p(t_pf *det);
int				ft_printf_u(t_pf *det);
int				ft_printf_percent(t_pf *det);
int				ft_count_args(char *str);
int				ft_printf_x(t_pf *det);
int				ft_print_pointer(t_pf *det, char *number);
char			*ft_itoa(long n);
char			*ft_itoa_u(size_t nb, int base, char updown);
#endif
