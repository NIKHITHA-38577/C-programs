#include <stdio.h>
int main()
{
    int temp;
    printf("enter the number of temparature:\n");
    scanf("%d",&temp);
    int summer;
    printf("enter 1 for summer nad 0 for not summer ");
    scanf("%d",&summer);
    if(summer==1)
    {
        if(temp>=60&&temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(summer>=60&&summer<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }

}