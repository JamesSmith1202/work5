char *mystrncat(char *dest, char *source, int n)
{
    int len_dest = mystrlen(dest);
    int i;
    for (i = 0; i < n; i++)
    {
        dest[len_dest + i] = source[i];
    }
    dest[len_dest + n] = '\0';
    return dest;
}
