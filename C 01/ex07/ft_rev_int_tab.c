/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 22:05:32 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/20 11:59:08 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int count2;
	int aux;

	count = 0;
	count2 = size - 1;
	while (count < (size / 2))
	{
		aux = tab[count];
		tab[count] = tab[count2];
		tab[count2] = aux;
		count++;
		count2--;
	}
}
