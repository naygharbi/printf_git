/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:01:54 by najgharb          #+#    #+#             */
/*   Updated: 2024/05/02 13:55:46 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifier(char c, va_list argptr)
{
	int	i;

	i = 0;
	if (c == 'i' || c == 'd')
		i += ft_number(va_arg(argptr, int));
	else if (c == 'c')
		i += ft_character(va_arg(argptr, int));
	else if (c == 's')
		i += ft_strg(va_arg(argptr, char *));
	else if (c == 'p')
		i += ft_ptr(va_arg(argptr, void *));
	else if (c == 'x' || c == 'X')
		i += ft_hexadicimal(va_arg(argptr, unsigned int), c);
	else if (c == 'u')
		i += ft_unsigned(va_arg(argptr, unsigned int));
	else
		i += ft_character(c);
	return (i);
}

//va_start sirve para inicializar el tipo de dato va_list y recibe 2 argumentos 
int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	argptr;

	va_start(argptr, str);
	i = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			i += ft_specifier(*str, argptr);
			str++;
		}
		else
		{
			i += ft_character(*str);
			str++;
		}
	}
	return (i);
}

// int main() {
//     ft_printf("hola %s, 'a', 2, test, v%x, %X", "1a", "B2" );
//     return 0;
// }