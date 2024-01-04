/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:11:55 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/11/08 12:55:26 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				len;
	unsigned char	a;

	a = c;
	len = ft_strlen(str);
	while (len-- >= 0)
	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
