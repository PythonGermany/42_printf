/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburgsta <rburgsta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:13:20 by rburgsta          #+#    #+#             */
/*   Updated: 2022/11/15 14:43:35 by rburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf_ptr(void *ptr)
{
	int	len;

	len = 0;
	ft_putstr_fd("0x", 1);
	len += 2;
	ft_putnbrul((unsigned long int)ptr, "0123456789abcdef", &len);
	return (len);
}
