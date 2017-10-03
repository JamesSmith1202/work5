#include <stdio.h>
#include <string.h>

int mystrlen(char *);                             //check
char *mystrcpy(char *dest, char *source);         //check
char *mystrncpy(char *dest, char *source, int n); //check
char *mystrcat(char *dest, char *source);         //check
char *mystrncat(char *dest, char *source, int n); //check
int mystrcmp(char *s1, char *s2);                 //check
char *mystrchr(char *s, char c);

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
    return mystrncpy(dest, source, strlen(source));
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
            return NULL;
        }
        s++;
    }
    return s;
}

int main()
{
    char str1[256] = "HOWDY";
    char str2[] = "hello";
    char str3[] = "goodbye";

    printf("Strings:\nstr1 = %s\nstr2 = %s\nstr3 = %s\n\n", str1, str2, str3);

    printf("Testing strlen(str1):\n");
    printf("Standard C: %lu\nMine: %d\n\n", strlen(str1), mystrlen(str1));

    printf("Testing strcpy(str1, str2):\n");
    printf("Standard C: %s\nMine: %s\n\n", strcpy(str1, str2), mystrcpy(str1, str2));

    printf("Testing strncpy(str1, str3, 3):\n");
    printf("Standard C: %s\nMine: %s\n\n", strncpy(str1, str3, 3), mystrncpy(str1, str3, 3));

    printf("Testing strcat(str1, str3):\n");
    printf("Standard C: %s\nMine: %s\n\n", strcat(str1, str3), mystrcat(str1, str3));

    printf("Testing strncat(str1, str2, 3):\n");
    printf("Standard C: %s\nMine: %s\n\n", strncat(str1, str2, 3), mystrncat(str1, str2, 3));

    printf("Testing strchr:\n");
    printf("strchr(str1, 'l'):\n    Standard C: %p\n    Mine: %p\n", strchr(str1, 'l'), mystrchr(str1, 'l'));
    printf("strchr(str1, 0):\n    Standard C: %p\n    Mine: %p\n", strchr(str1, 0), mystrchr(str1, 0));
    printf("strchr(str1, 'z'):\n    Standard C: %p\n    Mine: %p\n\n", strchr(str1, 'z'), mystrchr(str1, 'z'));

    printf("Testing strcmp:\n");
    printf("Comparing ab to abc:\nStandard C: %d\nMine: %d\n\n", strcmp("ab", "abc"), mystrcmp("ab", "abc"));
    printf("Comparing abc to ab:\nStandard C: %d\nMine: %d\n\n", strcmp("abc", "ab"), mystrcmp("abc", "ab"));
    printf("Comparing abc to abc:\nStandard C: %d\nMine: %d\n\n", strcmp("abc", "abc"), mystrcmp("abc", "abc"));

    return 0;
}