/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:45:44 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/15 19:45:46 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  first_len;
    size_t  second_len;
    char    *join;

    first_len = ft_strlen(s1);
    second_len = ft_strlen(s2);
    join = malloc(first_len + second_len + 1);
    if (join == NULL)
        return (NULL);

    ft_strlcpy(join, s1, first_len + 1);
    ft_strlcpy(join + first_len, s2, second_len + 1);

    return (join);
}

// #include <stdlib.h>
// #include <Stdio.h>
// int main(void)
// {
//     char *join;

//     join = ft_strjoin("Ola ", "pessoal");
//     if(join == NULL)
//         return(1);
//     printf("%s\n", join);
//     free(join);
//     return(0);
// }