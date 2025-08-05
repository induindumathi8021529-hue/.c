
#include<stdio.h>
int main()
{
    int N,ele,i;
    scanf("%d",&N);
    int arr[N];
    printf("Enter the array elements:");
    for(i=0;i<N;i++)
      scanf("%d",&arr[i]);
    printf("Enter the element to Search:");
    scanf("%d",&ele);
    for(i=0;i<N;i++)
    {
        if(arr[i]==ele){
            printf("Element is found at %d position",i+1);
            break;
        }
    }
    if(i==N)
        printf("Not Found");
    return 0;
}
