/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zy_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:57:54 by enja              #+#    #+#             */
/*   Updated: 2021/12/12 23:33:37 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	zy_putchar(char c)
{
	write(1, &c, 1);
	g_lemqadem++;
}