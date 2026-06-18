/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:32:09 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/17 21:32:10 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int count_len(long nb)
{
    unsigned int    numbers;

    if (nb == 0)
        return (1);
    if (nb < 0)
        numbers = 1;
    else
        numbers = 0;

    while (nb != 0)
    {
        numbers++;
        nb = nb/10;
    }
    return (numbers);
}

char	*ft_itoa(int n)
{

}