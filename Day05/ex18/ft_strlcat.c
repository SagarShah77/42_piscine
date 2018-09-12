/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 23:24:01 by sshah             #+#    #+#             */
/*   Updated: 2018/03/20 23:35:17 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s;
	unsigned int	d;
	unsigned int	space;

	i = 0;
	space = 0;
	while (src[i])
		i++;
	s = i;
	j = 0;
	while (dest[j] != 0 && size-- != 0)
		j++;
	space = size - j;
	if (space == 0)
		return (size + i);
	i = 0;
	d = j;
	while (src[i] != 0 && space-- > 1)
		dest[d++] = src[i++];
	return (s + j);
}
