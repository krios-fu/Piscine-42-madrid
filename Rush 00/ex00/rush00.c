/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorral- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:09:19 by jcorral-          #+#    #+#             */
/*   Updated: 2019/11/17 17:22:47 by jcorral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top(int x)
{
	char	c1;
	char	c2;
	int		i;

	c1 = 'o';
	c2 = '-';
	i = 1;
	ft_putchar(c1);
	while (i <= (x - 2))
	{
		ft_putchar(c2);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(c1);
	}
	ft_putchar('\n');
}

void	print_middle(int x)
{
	char	c1;
	char	c2;
	int		i;

	c1 = '|';
	c2 = ' ';
	i = 1;
	ft_putchar(c1);
	while (i <= (x - 2))
	{
		ft_putchar(c2);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(c1);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		i = 1;
		print_top(x);
		while (i <= (y - 2))
		{
			print_middle(x);
			i++;
		}
		if (y > 1)
		{
			print_top(x);
		}
	}
}
