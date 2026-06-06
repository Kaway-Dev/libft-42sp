/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 17:57:25 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/06 17:59:10 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    return c;
}

// int main(void)
// {
//     printf("%d\n", ft_toupper(65));
//     return(0);
// }