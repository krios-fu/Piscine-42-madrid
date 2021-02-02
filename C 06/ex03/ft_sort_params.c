/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 19:51:56 by krios-fu          #+#    #+#             */
/*   Updated: 2019/12/05 13:37:46 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char **tab, int size)
{
	int		i;
	int		pos;
	char	*cut;
	int		min;

	pos = 1;
	i = 1;
	while (i < size)
	{
		min = i;
		pos = i + 1;
		while (pos < size)
		{
			if (ft_strcmp(tab[pos], tab[min]) < 0)
			{
				min = pos;
			}
			pos++;
		}
		cut = tab[i];
		tab[i] = tab[min];
		tab[min] = cut;
		i++;
	}
}

void	ft_print_sort_parm(int argc, char **argv)
{
	int		i;
	char	*arv;
	int		j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		arv = argv[i];
		while (arv[j] != '\0')
		{
			ft_putchar(arv[j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	ft_sort_params(argv, argc);
	ft_print_sort_parm(argc, argv);
	return (0);
}
