/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:57:38 by sshah             #+#    #+#             */
/*   Updated: 2018/03/19 23:11:54 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[50] = "1";
	char src[50] = "2";

	ft_strcat(src, "Mile with smile");
	ft_strcat(dest, " sagar shah");
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
