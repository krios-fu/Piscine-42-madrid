/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 00:16:58 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/21 00:32:39 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int count;
	int flag;

	count = 0;
	flag = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 32 && str[count] <= 126)
		{
			flag++;
		}
		count++;
	}
	if (count == flag || str[0] == '\0')
	{
		return (1);
	}
	return (0);
}
