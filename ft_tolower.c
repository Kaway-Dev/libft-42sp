// #include <stdio.h>

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return (c + 32);
    }
    return c;
}

// int main(void)
// {
//     printf("%d\n", ft_tolower(65));
//     return(0);
// }