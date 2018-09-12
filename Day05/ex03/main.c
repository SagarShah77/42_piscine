/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:55:05 by sshah             #+#    #+#             */
/*   Updated: 2018/03/19 16:05:17 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpy(char *dest, char src);

int		main(void)
{
	char dest[50];
	char src[50];

	ft_strcpy(src, "Mile with smile");
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
