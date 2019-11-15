#include <stdio.h>
int main()
{
    int n = 0,m=0;
    int i = 0;
    int a;
    char digit[6];

    while (i < 7)
    {
     digit[i]=getchar();
        if (digit[i] == '\n')
        {
        break;
        }
    
            n = n * 10 +( digit[i] - '0');
           i++;
}
printf("%d",n);
}
