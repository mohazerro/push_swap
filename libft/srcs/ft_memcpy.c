/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 22:52:32 by mohazerr          #+#    #+#             */
/*   Updated: 2022/11/24 04:16:07 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*srcchar;
	char	*dstchar;

	srcchar = (char *)src;
	dstchar = (char *)dst;
	if (!srcchar && !dstchar)
		return (NULL);
	while (n > 0)
	{
		dstchar[n - 1] = srcchar[n - 1];
		n--;
	}
	return (dst);
}
