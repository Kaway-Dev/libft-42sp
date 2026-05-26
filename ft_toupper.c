// #include <stdio.h>

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