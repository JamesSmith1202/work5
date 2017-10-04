#include <stdio.h>
#include <string.h>
#include "myheaders.h"

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
