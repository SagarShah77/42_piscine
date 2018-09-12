/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:57:38 by sshah             #+#    #+#             */
/*   Updated: 2018/03/19 23:21:34 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char dest[50] = "1";
	char src[50] = "2";

	ft_strncat(src, "Mile with smile", 15);
	ft_strncat(dest, " sagar shah", 11);
	ft_strncat(dest, src, 9);
	printf("%s\n", dest);
	return (0);
}
