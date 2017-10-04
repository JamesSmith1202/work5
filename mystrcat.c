char *mystrcat(char *dest, char *source)
{
    int len_dest = mystrlen(dest);
    int i = 0;
    while (source[i])
    {
        dest[len_dest + i] = source[i];
        i++;
    }
    dest[len_dest + i] = source[i];
    return dest;
}
