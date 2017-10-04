int mystrlen(char *str)
{
    int counter = 0;
    char *p = str;
    while (*p)
    {
        p++;
        counter++;
    }
    return counter;
}
