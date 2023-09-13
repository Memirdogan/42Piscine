/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudogan <mudogan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:30 by mudogan           #+#    #+#             */
/*   Updated: 2023/09/13 14:57:29 by mudogan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen])
		destlen++;
	while (src[srclen])
		srclen++;
	while (src[i] && (destlen + i < size - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if (destlen < size)
	{
		dest[destlen + i] = '\0';
	}
	return (destlen + srclen);
}
