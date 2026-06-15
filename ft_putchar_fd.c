/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:34:32 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/15 20:04:41 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// #include <stdio.h>
// int main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	return(0);
// }
