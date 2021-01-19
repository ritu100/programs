/* Find minimum distance between two equal elements in array */
 
#include <bits/stdc++.h>
using namespace std;
 void findMinimumDistance(int arr[],int n,int X,int Y)
 {
    int min_dist = INT_MAX;
    for(int i=0; i<n; i++) //select one element
    {
      for(int j=i+1; j<n; j++) //traverse ahead
      {
        if(arr[i] == X and arr[j] == Y) // if we get X and Y we try to update the minimum distance
        min_dist = min(min_dist , abs(i-j));
        if(arr[i] == Y and arr[j] == X)
        min_dist = min(min_dist , abs(i-j));
      }
    }
    cout<<"\nMinimum Distance between "<<X<<" and "<<Y<<" : "<<min_dist;
 }
int main()
{
    int n;
    cout<<"\nEnter size:";
    cin>>n;
    int arr[n],X,Y;
    cout<<"\nEnter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter X and Y :";
    cin>>X>>Y; //the elements between which minimum distance is to be found
    findMinimumDistance(arr,n,X,Y);
  return 0;
}
