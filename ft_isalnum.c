

int ft_isalnum(int c)
{
    // if c is between 0 and 9 or between A and Z or between a and z
    if ((c >= '0' && c <= '9') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z'))
    {
        return (1); // return 1
    }
    else
        return (0); // else return 0
}