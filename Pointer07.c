//ARRAY SUM USING FUNCTION
#include <stdio.h>

int getsum(int *p, int n) //or int getsum(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    return(sum);
}
int main()
{
    int arr[6] ={3,7,9,2,6,1};
    printf("Sum of array is: %d",getsum(arr+2,6)); //(sizeof(arr)/sizeof(int)))
    // in getsum call arr pointer is passed, not the whole array
    return 0;
}
