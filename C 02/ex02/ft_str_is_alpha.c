/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:14:48 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/22 20:47:50 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int flag;
	int count;

	flag = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a') && (str[count] <= 'z'))
			flag++;
		else if (str[count] >= 'A' && str[count] <= 'Z')
			flag++;
		++count;
	}
	if (count == flag || str[0] == '\0')
		return (1);
	return (0);
}
