/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 22:16:54 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/27 17:26:04 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0')
		count++;
	return (count);
}

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_l;
	unsigned int	n;

	d_l = ft_strlen(dest);
	n = 0;
	while (n < nb && src[n] != '\0')
	{
		dest[d_l] = src[n];
		d_l++;
		n++;
	}
	dest[d_l] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_l;
	unsigned int	s_l;

	d_l = ft_strlen(dest);
	s_l = ft_strlen(src);
	if (d_l == size || size == 0)
		return (s_l + size);
	if (s_l < (size - d_l))
		ft_strncat(dest, src, s_l + 1);
	else
	{
		ft_strncat(dest, src, size - 1);
		dest[(d_l + size) - 1] = '\0';
	}
	return (d_l + s_l);
}
