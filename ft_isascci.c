

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

// Test main
int main(void)
{
    int c;

    printf("Enter a character: ");
    scanf("%c", &c);
    if(ft_isascii(c))
        printf("The character is an ASCII character\n");
    else
        printf("The character is not an ASCII character\n");
    return (0);
}