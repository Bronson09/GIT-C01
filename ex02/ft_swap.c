/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaulie <gbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:03:21 by gbeaulie          #+#    #+#             */
/*   Updated: 2023/01/19 07:36:52 by gbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int	value1;
// 	int	value2;

// 	value1 = 99;
// 	value2 = 66;
// 	printf("Before Swapping: value1 is: %d, value2 is: %d\n", value1, value2);
// 	ft_swap(&value1, &value2);
// 	printf("After Swapping: value1 is: %d, value2 is: %d\n", value1, value2);
// 	return (0);
// }
