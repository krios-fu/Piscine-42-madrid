/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 02:49:05 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/25 12:31:28 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_true_or_false(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (0);
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;
	char	c;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		c = str[i - 1];
		flag = ft_true_or_false(c);
		if (flag == 1 || (c <= 64 && c >= 58))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}
