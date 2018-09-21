/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:36:02 by qpaddock          #+#    #+#             */
/*   Updated: 2018/06/14 11:48:26 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	jind;
	size_t	place;

	index = -1;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	if (haystack[0] == '\0')
		return (NULL);
	while (index++ != len)
	{
		jind = 0;
		place = index;
		if (haystack[index] == needle[jind])
		{
			if (len < (size_t)ft_strlen(needle) + index)
				return (NULL);
			while (haystack[index] == needle[jind])
			{
				jind++;
				index++;
				if (jind == (size_t)ft_strlen(needle))
					return ((char*)&haystack[index - jind]);
			}
		}
		index = place++;
	}
	return (NULL);
}
