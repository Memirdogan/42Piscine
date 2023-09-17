/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudogan <mudogan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:37:43 by mudogan           #+#    #+#             */
/*   Updated: 2023/09/17 17:37:44 by mudogan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ac > 1)
	{
		while (av[j])
		{
			while (av[j][i])
			{
				write (1, &av[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			j++;
		}
	}
}
