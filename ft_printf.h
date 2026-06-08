/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 12:51:03 by mtyhach           #+#    #+#             */
/*   Updated: 2026/06/08 12:51:05 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <sys/types.h>

int	ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_putnbr(int n);
int ft_putstr(char *str);
int ft_putptr(void *ptr);

#endif
