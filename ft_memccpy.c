/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abinois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:20:22 by abinois           #+#    #+#             */
/*   Updated: 2019/04/12 11:53:42 by abinois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dcopy;
	unsigned char	*scopy;

	if (!n)
		return (NULL);
	dcopy = (unsigned char*)dst;
	scopy = (unsigned char*)src;
	while (n--)
	{
		if (*scopy == (unsigned char)c)
		{
			*dcopy = *scopy;
			return ((void*)++dcopy);
		}
		*dcopy++ = *scopy++;
	}
	return (NULL);
}
