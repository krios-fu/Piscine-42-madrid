/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 10:22:19 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/19 11:37:26 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long r;

	r = nb;
	if (r < 0)
	{
		write(1, "-", 1);
		r = r * -1;
	}
	if (r >= 10)
	{
		ft_putnbr(r / 10);
		ft_putnbr(r % 10);
	}
	else
	{
		ft_putchar(r + '0');
	}
}
