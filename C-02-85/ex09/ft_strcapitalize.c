/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudogan <mudogan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:33:27 by mudogan           #+#    #+#             */
/*   Updated: 2023/09/11 12:36:56 by mudogan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	kontrol;

	i = 0;
	kontrol = 1;
	lowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (kontrol == 1)
			{
				str[i] = str[i] - 32;
			}
			kontrol = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			kontrol = 0;
		}
		else
			kontrol = 1;
		i++;
	}
	return (str);
}
