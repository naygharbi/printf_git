/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:01:04 by najgharb          #+#    #+#             */
/*   Updated: 2024/04/23 14:34:15 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_character(char c);
int	ft_hexadicimal(unsigned int hex, char c);
int	ft_ptr(void *p);
int	ft_strg(char *s);
int	ft_number(int n);
int	ft_unsigned(unsigned int n);

#endif