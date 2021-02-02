/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:33:32 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/27 14:45:41 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				count;
	unsigned int	n;

	count = 0;
	n = 0;
	while (dest[count] != '\0')
		count++;
	while (n < nb && src[n] != '\0')
	{
		dest[count] = src[n];
		count++;
		n++;
	}
	dest[count] = '\0';
	return (dest);
}
