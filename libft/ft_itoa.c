/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 16:28:20 by iiliuk            #+#    #+#             */
/*   Updated: 2016/09/29 16:28:20 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		ft_sign(int n)
{
	if (n > 0)
		return ('+');
	else if (n < 0)
		return ('-');
	return ('0');
}

char			*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	tmp;
	unsigned int	nbr;

	tmp = ft_sign(n) == '-' ? -n : n;
	nbr = tmp;
	i = ft_sign(n) != '+' ? 1 : 0;
	while (tmp)
	{
		i++;
		tmp = tmp / 10;
	}
	str = ft_strnew(i);
	if (str == NULL)
		return (NULL);
	str[0] = ft_sign(n);
	while (nbr)
	{
		i--;
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (str);
}
