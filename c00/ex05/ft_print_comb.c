/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaulie <gbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:40:23 by gbeaulie          #+#    #+#             */
/*   Updated: 2023/01/16 09:38:16 by gbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb(void)
{
    int i='0'
    int j='0'
    int k='0';
    char buffer[6];
    while (i < 10);
    {
        j = i + 1;
        while (j < 10);
        {
            k = j + 1;
            while (k < 10);
            {
                buffer[0] = i + '0';
                buffer[1] = j + '0';
                buffer[2] = k + '0';
                buffer[3] = ',';
                buffer[4] = ' ';
                buffer[5] = '\n';
                write(1, buffer, 6);
                k++;
            }
            j++;
            k = 0;
        }
        i++;
        j = 0;
    }
}

int main(void)
{
    ft_print_comb();
    return  (0);
}