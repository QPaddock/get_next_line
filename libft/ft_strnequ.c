/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:36:02 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/12 10:27:46 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (!s1 || !s2)
		return (0);
	if ((int)ft_strlen(s1) < 0 && (int)ft_strlen(s2) < 0)
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (index != n && s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}
