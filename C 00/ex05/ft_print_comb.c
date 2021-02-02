/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:28:51 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/18 20:10:08 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int centena;
	int unidad;
	int decena;
	int contador;

	contador = 0;
	while (contador <= 789)
	{
		centena = ((contador / 100) + 48);
		decena = (((contador % 100) / 10) + 48);
		unidad = (((contador % 100) % 10) + 48);
		if (centena < decena && decena < unidad)
		{
			write(1, &centena, 1);
			write(1, &decena, 1);
			write(1, &unidad, 1);
			if (contador < 789)
			{
				write(1, ", ", 2);
			}
		}
		contador++;
	}
}
