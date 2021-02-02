/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorral- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 10:11:30 by jcorral-          #+#    #+#             */
/*   Updated: 2019/11/17 17:23:43 by jcorral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	other_characters(char c, int x)
{
	int i;

	i = 1;
	while (i <= (x - 2))
	{
		ft_putchar(c);
		i++;
	}
}

void	print_top(int x, int f)
{
	char c1;
	char c2;
	char c3;

	c3 = 'B';
	if (f == 0)
	{
		c1 = 'A';
		c2 = 'C';
	}
	else
	{
		c1 = 'C';
		c2 = 'A';
	}
	ft_putchar(c1);
	other_characters(c3, x);
	if (x > 1)
	{
		ft_putchar(c2);
	}
	ft_putchar('\n');
}

void	print_middle(int x)
{
	char	c1;
	char	c2;
	int		i;

	c1 = 'B';
	c2 = ' ';
	i = 1;
	ft_putchar(c1);
	other_characters(c2, x);
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
		print_top(x, 0);
		while (i <= (y - 2))
		{
			print_middle(x);
			i++;
		}
		if (y > 1)
		{
			print_top(x, 1);
		}
	}
}
