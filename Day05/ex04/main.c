/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:55:05 by sshah             #+#    #+#             */
/*   Updated: 2018/03/19 16:52:32 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[50];
	char src[50];

	ft_strncpy(src, "sagar shah", 10);
	ft_strncpy(dest, "dharmik shah", 12);
	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
