#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"\nEnter size:";
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n;i++)
    {
        temp=i+1;
        for(j=i+1;j<n;j++)
        {
           if(arr[j]>arr[i])
              break;
        }

        if(j==n)
        cout<<"\nLeader Element : "<<arr[i];
    }

    return 0;
}
