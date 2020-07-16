/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:21:46 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/16 14:27:58 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_recursive_power(int nb, int power)
{
	if (power <0)
		return  (0);
	if (power == 0)
		return(1);

	else if(power ==1)
		return (nb);
       else 
		   return (nb *ft_recursive_power(nb, power -1));
}
