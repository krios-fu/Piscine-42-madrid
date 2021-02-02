/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 19:03:23 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/27 15:03:18 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;
	unsigned int count2;
	unsigned int flag;

	count = 0;
	while (s1[count] != '\0')
	{
		flag = 0;
		count2 = 0;
		while (count2 < n && s2[count2] != '\0')
		{
			if (s1[count + count2] == s2[count2])
				flag++;
			if (flag == n)
				return (&s1[count]);
			count2++;
		}
		count++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		count_to_find;
	char	*pos;

	count_to_find = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[count_to_find] != '\0')
		count_to_find++;
	pos = ft_strncmp(str, to_find, count_to_find);
	if (pos != 0)
	{
		return (pos);
	}
	return (0);
}
