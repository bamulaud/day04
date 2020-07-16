/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:25:50 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/16 15:36:53 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int b)
{
	int num;
	 num = 1;
	 if (nb < 0 || nb > 12)
		 return (0);
	 while (nb >0 )
		 num *=nb--;
	 return(num);
}
