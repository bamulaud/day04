/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:29:22 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/16 15:06:12 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_fibonacci(int index)
{
	if (index <0 || index >46)
		return (-1);
	else if (index == 0)
		return (0);
	else if(index <= 2)
		return (1);
	else
		 return (ft_fibonacci(index - 1) + ft_fibonacci(index  2));
}


