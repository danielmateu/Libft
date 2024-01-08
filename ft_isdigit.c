

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9') // if c is between 0 and 9
        return (1); // return 1
    else
        return (0); // else return 0
}