/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:54:46 by najgharb          #+#    #+#             */
/*   Updated: 2024/03/22 11:04:48 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_number(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		ft_strg("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_character('-');
		i++;
		n = -n;
	}
	if (n > 9)
		i += ft_number(n / 10);
	ft_character(n % 10 + '0');
	return (i + 1);
}
