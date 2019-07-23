/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: triou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 13:52:02 by triou             #+#    #+#             */
/*   Updated: 2018/09/08 18:24:26 by triou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	char	*d;

	if ((d = dest) && src)
	{
		while (*d)
			d++;
		while (*src)
			*d++ = *src++;
		*d = '\0';
	}
	return (dest);
}
