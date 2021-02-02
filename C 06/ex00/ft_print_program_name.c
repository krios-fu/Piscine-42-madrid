/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:30:08 by krios-fu          #+#    #+#             */
/*   Updated: 2019/12/05 12:18:08 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	*name_file;
	int		i;

	name_file = argv[0];
	i = argc - argc;
	while (name_file[i] != '\0')
	{
		ft_putchar(name_file[i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
