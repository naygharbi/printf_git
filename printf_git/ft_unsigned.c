/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:58:33 by najgharb          #+#    #+#             */
/*   Updated: 2024/03/22 11:09:23 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
		i += ft_unsigned(n / 10);
	ft_character(n % 10 + '0');
	return (i + 1);
}
