/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:32:15 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/17 21:32:16 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int count_words(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        while (s[i] != '\0' && s[i] == c)
        i++;
        if(s[i] != '\0')
            count++;
        while(s[i] != '\0' && s[i] != c)
        i++;
    }
    return (count);
}

static  int word_len(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] != '\0' && s[i] != c)
        i++;
    return (i);
}

static  char **split_free(char **result, int i)
{
    while(i > 0)
    {
        i--;
        free(result[i]);
    }
    free(result);
    return (NULL);
}