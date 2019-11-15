#include <stdio.h>
int main(void)
{
    printf("max bit is 50\n");

    int i=0,a=0,b=0;
    char digit[50];
    
   while ((digit[i] = getchar()) != EOF&& digit[i] != '\n' )
   {if (digit[i]=='a'||digit[i]=='A')
a=a+1;
if (digit[i]=='0')
{
b=b+1;
}
i=i+1;

   }
    printf("the number of a is :%d\n",a);
printf("the number of 0 is :%d\n",b);
}
    
 