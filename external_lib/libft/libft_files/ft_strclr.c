/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoussai <lotoussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:56:19 by ltoussai          #+#    #+#             */
/*   Updated: 2020/06/19 14:56:19 by ltoussai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_strclr(char *s)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (s[i])
			s[i++] = '\0';
	}
}