/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:45:01 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/15 19:45:03 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}

// #include <stdio.h>

// int main(void)
// {
//     char str[9] = "Gabriela";
//     ft_bzero(str + 3, 2);
//     printf("%s\n", str);
//     return(0);
// }