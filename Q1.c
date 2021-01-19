/* c++ program to find smallest and second smallest element in array */

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("\nEnter size:");
    scanf("%d",&n);
    int arr[n],small1,small2;

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    small1=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<small1)
        {
            small2=small1;
            small1=arr[i];
        }
        if(arr[i]>small1 && arr[i]<small2)
            small2=arr[i];

    }

    printf("smallest element in given array : %d",small1);
    printf("\nSecond smallest element in given array : %d",small2);

    return 0;
}
