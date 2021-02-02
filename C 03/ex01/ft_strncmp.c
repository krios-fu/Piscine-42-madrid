/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 13:52:42 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/27 16:45:06 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				plus;

	count = 0;
	plus = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
		{
			plus = (s1[count] - s2[count]);
			return (plus);
		}
		count++;
	}
	if ((s1[count] == '\0' || s2[count] == '\0') && count != n)
		return (s1[count] - s2[count]);
	return (plus);
}
