/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:53:27 by najgharb          #+#    #+#             */
/*   Updated: 2024/03/22 11:09:16 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strg(char *s)
{
	int	i;

	i = 0;
	while (s && *s)
	{
		ft_character(*s);
		i++;
		s++;
	}
	if (s == NULL)
	{
		i += write(1, "(null)", 6);
	}
	return (i);
}
