/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:46:27 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/25 17:25:19 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	conver_dec(int a)
{
	int		c;
	int		i;
	int		r;
	char	ehx;

	i = 0;
	c = a;
	ehx = '0';
	while (c > 0)
	{
		r = c % 16;
		if (r < 10)
		{
			ehx = r + 48;
			ft_putchar(ehx);
		}
		if ((r > 9) && (r <= 16))
		{
			ehx = r + 87;
			ft_putchar(ehx);
		}
		c = c / 16;
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int dec;
	int i;

	dec = 0;
	i = 0;
	while (str[i] != '\0')
	{
		dec = str[i];
		if ((dec >= 0 && dec <= 31) || dec == 127)
		{
			ft_putchar('\\');
			if (dec <= 16)
				ft_putchar('0');
			conver_dec(dec);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
