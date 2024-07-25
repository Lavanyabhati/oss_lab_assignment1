#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float sum=0.0,avg;

    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:");
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    avg=sum/n;
    printf("Average=%f\n",avg);
    return 0;

}
