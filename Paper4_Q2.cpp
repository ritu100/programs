/* c++ program to find duplicate elements in array */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void findRepeatedElements(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n && j!=i;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<"\t";
                break;
            }

        }
    }

}

int main()
{
    int n,i;
    cout<<"\nEnter size:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nDuplicate elements : ";
    findRepeatedElements(arr, n);
    return 0;
}


