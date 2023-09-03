/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudogan <mudogan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:50:47 by mudogan           #+#    #+#             */
/*   Updated: 2023/09/02 13:51:07 by mudogan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); //prototip

void	satir_olustur(int line, char a_1, char b_2, char c_3)
{
	int	den	;

	den = 1;
	while (den <= line)
	{
		if (den == 1)
		{
			ft_putchar(a_1);
		}
		else if (den > 1 && den < line)
		{
			ft_putchar(b_2);
		}
		else
		{
			ft_putchar(c_3);
		}
		den++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	iter	;

	iter = 1;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (iter <= y)
	{
		if (iter == 1)
			satir_olustur(x, '/', '*', '\\');
		else if (iter > 1 && iter < y)
			satir_olustur(x, '*', ' ', '*');
		else
			satir_olustur(x, '\\', '*', '/');
		iter++;
	}
}
