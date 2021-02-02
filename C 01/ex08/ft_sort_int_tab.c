/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 22:29:31 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/19 23:36:02 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int pos;
	int cut;
	int min;

	pos = 0;
	i = 0;
	while (i < size)
	{
		min = i;
		pos = i + 1;
		while (pos < size)
		{
			if (tab[pos] < tab[min])
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
