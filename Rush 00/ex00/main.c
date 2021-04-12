/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorral- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:51:58 by jcorral-          #+#    #+#             */
/*   Updated: 2019/11/16 18:46:24 by jcorral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	rush(int x, int y);

int		main(void)
{
	int x;
	int y;
	while (1)
	{
		printf("Cordenadas X e Y\n");
		scanf("%d %d", &x, &y);
		rush(x, y);
	}
	return (0);
}
