/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osegobae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:03:47 by osegobae          #+#    #+#             */
/*   Updated: 2020/02/19 12:11:45 by osegobae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	len;
	int count;
	char*arr;

	len = 0;
	count = 0;
	while (src[len] != '\0')
	{
		++len;
	}
	arr = (char *)malloc(sizeof(*src) * len + 1);
	if (arr == NULL)
		return (arr);
	while (src[count] != '\0')
	{
		arr[count] = src[count];
		count++;
	}
	arr[count] = '\0';
	return (arr);
}
