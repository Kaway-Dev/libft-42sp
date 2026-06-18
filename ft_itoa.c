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

static  void fill_str(char *str, long nb, unsigned int len)
{
    str[len] = '\0';
    if (nb == 0)
    {
        str[0] = '0';
        return ;
    }
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while (nb > 0)
    {
        str[len - 1] = nb % 10 + '0';
        nb = nb / 10;
        len--;
    }
}

char	*ft_itoa(int n)
{
    unsigned int    len;
    long            nb;
    char            *str;

    nb = n;
    len = count_len(nb);
    str = malloc(len + 1);
    if (str == NULL)
        return (NULL);
    fill_str(str, nb, len);
    return (str);
}