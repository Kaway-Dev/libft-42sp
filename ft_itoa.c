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
    unsigned int    count;

    if (nb == 0)
        return (1);
    if (nb < 0)
        count = 1;
    else
        count = 0;
    while (nb != 0)
    {
        count++;
        nb = nb / 10;
    }
    return (count);
}

char	*ft_itoa(int n)
{

}