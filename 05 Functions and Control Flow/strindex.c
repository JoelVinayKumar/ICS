#include<stdio.h>

int mstrindex(char s[],char t[])
{
    int i,j,k, result;

    result = -1;

    for(i=0;s[i]!='\0';i++)
    {
        for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
            ;
        if(k>0 && t[k] == '\0')
            result = i;
    }
    return result;
}

int main(void)
{
    char line1[] = "abcdedfabcde";
    char pattern1[] = "abc";

    char line2[] = "occurrence";
    char pattern2[] = "r";

    char line3[] = "software";
    char pattern3[] = "soft";

    char line4[] = "hiranhiranheeran";
    char pattern4[] = "ran";

    int found1,found2,found3,found4;
    found1 = mstrindex(line1, pattern1);
    found2 = mstrindex(line2, pattern2);
    found3 = mstrindex(line3, pattern3);
    found4 = mstrindex(line4, pattern4);

    printf("%s\t%s\t\tright index at: %d\n", pattern1, line1, found1);
    printf("%s\t%s\t\tright index at: %d\n", pattern2, line2, found2);
    printf("%s\t%s\t\tright index at: %d\n", pattern3, line3, found3);
    printf("%s\t%s\tright index at: %d\n", pattern4, line4, found4);

}

