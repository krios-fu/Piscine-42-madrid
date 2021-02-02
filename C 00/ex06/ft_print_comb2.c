/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:15:49 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/18 20:12:04 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int a)
{
	char dec;
	char uni;

	dec = ((a / 10) + 48);
	uni = ((a % 10) + 48);
	write(1, &dec, 1);
	write(1, &uni, 1);
}

void	ft_print_comb2(void)
{
	int global;
	int ref_1;

	global = 0;
	while (global < 100)
	{
		ref_1 = 0;
		while (ref_1 < 100)
		{
			if ((ref_1 > global) && (ref_1 != global))
			{
				print_int(global);
				write(1, " ", 1);
				print_int(ref_1);
				if (global < 98)
				{
					write(1, ", ", 2);
				}
			}
			ref_1++;
		}
		global++;
	}
}
