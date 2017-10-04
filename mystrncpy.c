char *mystrncpy(char *dest, char *source, int n)
{
    int i;
    char *p = dest;
    for (i = 0; i < n; i++)
    {
        *dest = *source;
        dest++;
        source++;
    }
    return p;
}
