/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osegobae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:44:50 by osegobae          #+#    #+#             */
/*   Updated: 2020/02/17 14:59:40 by osegobae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int k;

	n = 0;
	if (to_find[n] == '\0')
	{
		return (str);
	}
	while (str[n] != '\0')
	{
		k = 0;
		while (str[n + k] != '\0' && str[n + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
			{
				return (&str[n]);
			}
			++k;
		}
		++n;
	}
	return (0);
}
