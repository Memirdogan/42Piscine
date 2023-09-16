/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudogan <mudogan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:51:49 by mudogan           #+#    #+#             */
/*   Updated: 2023/09/16 19:53:14 by mudogan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	holder;

	holder = nb;
	if (power > 1)
		return (nb * ft_recursive_power (nb, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (nb);
}
