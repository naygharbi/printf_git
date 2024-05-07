/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:51:38 by najgharb          #+#    #+#             */
/*   Updated: 2024/03/22 11:09:06 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_recursion(unsigned long n)
{
	int	i;

	i = 1;
	if (n >= 16)
	{
		i += ft_recursion(n / 16);
	}
	ft_character("0123456789abcdef"[n % 16]);
	return (i);
}

int	ft_ptr(void *p)
{
	int				i;
	unsigned long	n;
	const char		*hex_digits;

	i = 2;
	hex_digits = "0123456789abcdef";
	ft_strg("0x");
	n = (unsigned long)p;
	i += ft_recursion(n);
	return (i);
}
