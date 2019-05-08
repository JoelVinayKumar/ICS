#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("char    -> (%d,%d)\n",CHAR_MAX,CHAR_MIN);
    printf("int     -> (%d,%d)\n",INT_MAX,INT_MIN);
    printf("long    -> (%d,%d)\n",LONG_MAX,LONG_MIN);
    printf("float   -> (%d,%d)\n",FLT_MAX,FLT_MIN);
    printf("double  -> (%d,%d)\n",DBL_MAX,DBL_MIN);
    return 0;
}