/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:10:47 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/16 14:18:32 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_iterative_power(int nb, int power)
{
	int results;
	results = nb;
	if (power < 0)
		return (0);
	while (power --> 1)
		results * = nb;
	return (results);
}
