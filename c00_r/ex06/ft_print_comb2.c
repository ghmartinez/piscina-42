/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrmart <gabrmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:37:18 by gabrmart          #+#    #+#             */
/*   Updated: 2023/08/11 21:08:05 by gabrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			write(1, &(char){(num1 / 10) + '0'}, 1);
			write(1, &(char){(num1 % 10) + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){(num2 / 10) + '0'}, 1);
			write(1, &(char){(num2 % 10) + '0'}, 1);
			if (!(num1 == 98 && num2 == 99))
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}
