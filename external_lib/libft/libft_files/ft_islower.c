/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoussai <lotoussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:56:12 by ltoussai          #+#    #+#             */
/*   Updated: 2020/06/19 14:56:12 by ltoussai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}