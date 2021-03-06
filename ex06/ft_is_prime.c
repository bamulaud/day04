/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:30:00 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/16 15:35:57 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd. h>
int		ft_is_prime(int nb)
{
	int i;
	if (nb <= 1)
		return (0);
	i = 2;
	while(i * i < nb && i < 46341)
	{ if(nb % i == 0)
		return (0);
		++i;
	}return (1);
}
