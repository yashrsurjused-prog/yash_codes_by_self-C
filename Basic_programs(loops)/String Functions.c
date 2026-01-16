#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    /* String Length */
    printf("Length of str1 = %d\n", strlen(str1));

    /* String Copy */
    strcpy(str3, str1);
    printf("Copied string (str3) = %s\n", str3);

    /* String Concatenation */
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    /* String Comparison */
    if (strcmp(str2, "World") == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    /* String Reverse */
    printf("Reverse of str2 = %s\n", strrev(str2));

    /* Uppercase */
    printf("Uppercase = %s\n", strupr(str3));

    /* Lowercase */
    printf("Lowercase = %s\n", strlwr(str3));

    return 0;
}

//output:
Length of str1 = 5
Copied string (str3) = Hello
Concatenated string = HelloWorld
Strings are equal
Reverse of str2 = dlroW
Uppercase = HELLO
Lowercase = hello

