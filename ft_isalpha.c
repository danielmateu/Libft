


int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // if c is between a and z or A and Z
        return (1); // return 1
    else
        return (0); // else return 0
}