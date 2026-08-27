#include <stdio.h>
#include <stdlib.h>

//making some changes
int main()
{
    int values[5]={0};

    //printf("Please enter array elements: ");
    //taking array inputs
    for(int i=0;i<5;i++)
    {
        printf("Please enter array element value[%d]\n ",i);
        scanf("%d \n",&values[i]);
    }
    //printing array elements
    for(int i=4;i>=0;i--)
    {
        printf("%d\t",values[i]);
    }

    return 0;
}
