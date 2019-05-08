#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[100],str2[100];
    printf("Enter the string: ");
    scanf("%s",&str1);
    int j = 0;
    for(int i=strlen(str1)-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    printf("%s]n",str2);
}