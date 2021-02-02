/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:47:49 by krios-fu          #+#    #+#             */
/*   Updated: 2019/11/30 12:18:09 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_isspace_position(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13)
			|| str[i] == 32 || str[i] == 45 || str[i] == 43)
		i++;
	return (&str[i]);
}

int		ft_cmp_position(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while ((str[i] >= 9 && str[i] <= 13)
			|| str[i] == 32 || str[i] == 45 || str[i] == 43)
	{
		if (str[i] == '-')
			flag++;
		i++;
	}
	if (flag % 2 == 0)
		return (1);
	return (-1);
}

int		ft_strlen_nb(char *str, char *base, int i, int k)
{
	char	*ptr;
	int		len;
	int		j;

	ptr = ft_isspace_position(str);
	len = 0;
	while (base[k] != '\0')
		k++;
	while (ptr[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[j] == ptr[i])
			{
				len++;
				break ;
			}
			j++;
		}
		if (j == k)
			return (len);
		i++;
	}
	return (len);
}

int		ft_ghost(char *str, char *base, int i, int l)
{
	int		j;
	int		nb;
	char	*ptr;

	nb = 0;
	while (base[l] != '\0')
		l++;
	ptr = ft_isspace_position(str);
	while (i < (ft_strlen_nb(str, base, 0, 0)))
	{
		j = 0;
		while (j < l)
		{
			if (ptr[i] == base[j])
			{
				nb += j;
				if (i < (ft_strlen_nb(str, base, 0, 0) - 1))
					nb *= l;
			}
			j++;
		}
		i++;
	}
	return ((nb * ft_cmp_position(str)));
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int flag;

	i = 0;
	flag = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if ((base[i] >= 'a' && base[i] <= 'z')
			|| (base[i] >= 'A' && base[i] <= 'Z')
			|| (base[i] >= '0' && base[i] <= '9'))
			flag++;
		i++;
	}
	if (flag == i)
		return (ft_ghost(str, base, 0, 0));
	return (0);
}
