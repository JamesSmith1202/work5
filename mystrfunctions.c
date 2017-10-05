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

char *mystrcpy(char *dest, char *source)
{
    return mystrncpy(dest, source, strlen(source)+1);
}

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

int mystrcmp(char *s1, char *s2)
{
    while ((*s1 == *s2) && (*s1 != '\0' || *s2 != '\0'))
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char *mystrchr(char *s, char c){
    while(*s != c){
        if(*s == 0){
            return 0;
        }
        s++;
    }
    return s;
}
