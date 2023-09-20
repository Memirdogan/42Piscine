/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudogan <mudogan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:53:34 by mudogan           #+#    #+#             */
/*   Updated: 2023/09/20 19:09:10 by mudogan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*p;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	p = malloc(len * 4);
	if (p == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		p[i] = min + i;
		i++;
	}
	*range = p;
	return (len);
}
