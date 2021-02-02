/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:51:52 by krios-fu          #+#    #+#             */
/*   Updated: 2019/12/03 19:44:22 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*arv;
	int		j;

	i = 1;
	j = 0;
	if (argc == 1)
		return (0);
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
	return (0);
}
