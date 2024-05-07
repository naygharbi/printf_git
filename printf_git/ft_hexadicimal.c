/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadicimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:57:25 by najgharb          #+#    #+#             */
/*   Updated: 2024/05/02 13:56:51 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//S

int	ft_hexadicimal(unsigned int hex, char c)
{
	int			i;
	const char	*hex_digits;

	i = 0;
	if (c == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (hex >= 16)
	{
		i += ft_hexadicimal(hex / 16, c);
	}
	ft_character(hex_digits[hex % 16]);
	return (i + 1);
}
