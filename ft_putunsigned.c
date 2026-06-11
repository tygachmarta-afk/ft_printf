/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:30:43 by mtyhach           #+#    #+#             */
/*   Updated: 2026/06/11 12:30:45 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunsigned(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 0)
    {
        count += ft_putunsigned(n / 10);
        count += ft_putunsigned(n % 10);
    }
    else
    {
        count += ft_putchar(n + '0');
    }
    return (count);
}
