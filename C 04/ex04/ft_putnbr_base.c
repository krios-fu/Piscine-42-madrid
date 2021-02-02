/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:43:02 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/30 11:57:39 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *base)
{
	int		count;

	count = 1;
	while (base[count] != '\0')
		count++;
	return (count);
}

int			ft_cmp(char *base)
{
	int		i;
	int		j;
	int		flag;

	i = 0;
	flag = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if ((base[i] >= 'a' && base[i] <= 'z')
			|| (base[i] >= 'A' && base[i] <= 'Z')
			|| (base[i] >= '0' && base[i] <= '9'))
			flag++;
		i++;
	}
	if (flag == i)
		return (0);
	else
		return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		c;

	if ((ft_strlen(base) > 1 && ft_cmp(base) == 0) && base[0] != '\0')
	{
		n = nbr;
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= ft_strlen(base))
		{
			ft_putnbr_base(n / ft_strlen(base), base);
		}
		c = n % ft_strlen(base);
		ft_putchar(base[c]);
	}
}
