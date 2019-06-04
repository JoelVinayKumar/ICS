#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXSIZE 1000
void mystrncpy(char *dest,char *source,int n)
{
    while(*source && n-- > 0)
        *dest++ = *source++;

    int extra = mystrnlen(dest) - n;

    while (extra-- > 0) {
        *dest++;
    }

    *dest = '\0';
}

void mystrncat(char *str1, char *str2, char *dest, int n) {
    while(*str1) {
        *dest++ = *str1++;
    }

    while(n-- >0) {
        *dest++ = *str2++;
    }

    *dest = '\0';
}

int mystrncmp(char *lhs,char *rhs, int n)
{
    for(; *lhs == *rhs; lhs++,rhs++)
        if( *lhs == '\0' || --n <=0)
            return 0;
    return *lhs - *rhs;

}

int mystrnlen(char *s) {
    char *p = s;
    while (*s != '\0') {
        s = s + 1;
    }
    return s - p;
}

int main(int argc, char *argv[])
{

    char dest[100000];
    char source[100000];
    int n;
    scanf("%s",&dest);
    scanf("%s",&source);
    scanf("%d",&n);
    mystrncpy(dest,source,n);
    printf("%s\n",dest);
    char s1[]= "ABCD";
    char t1[]= "EFGHIJ";
    char *d;
    if ((d = (char *) malloc(sizeof(char) * (strlen(s1) + + 4 + 1))) == NULL)
    {
        printf("unable to allocate memory \n");
        return -1;
    }

    mystrncat(s1,t1,d, 4);
    printf("%s\n", d);
    free(d);
    char s2[]= "ABCDEF";
    char t2[]= "ABC";
    int result;
    result = mystrncmp(s2,t2,3);
    printf("%d\n", result);
    return 0;
}









