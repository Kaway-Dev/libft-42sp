// #include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s;
}

// int main (void)
// {
//     char str[9] = "Gabriela";
//     ft_memset(str, 'p', 2);
//     printf("%s\n", str);
//     return(0);
// }