/* c++ program to find two elements whose sum is closest to zero */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void SumCloseToZero(int arr[], int n)
{
    int first, last ,sum1, sum = 0, first1, last1;

    /* Array should have at least two elements*/
    if(n < 2)
    {
        cout<<"Enter array size more than 2";
        return;
    }

    /* Sort the elements */
    sort(arr,arr+n);


    /* Start looking for the pair  */
    first= 0; last = n-1;
    sum1 = arr[first] + arr[last];
    first1 = first;
    last1 = last;

    while(first < last)
    {
        sum = arr[first] + arr[last];

        /*If abs(sum) is less then update the result items*/
        if(abs(sum) < abs(sum1))
        {
            sum1 = sum;
            first1 = first;
            last1 = last;
        }
        if(sum < 0)
            first++;
        else
            last--;

    }

    cout<<" The two elements with minimum sum : "<<arr[first1]<<" and "<<arr[last1];
}


int main()
{
    int n,i;
    cout<<"\nEnter size:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    SumCloseToZero(arr, n);
    return 0;
}

