/* c++ program to find median of running stream of integers */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// placing the last element recieved at it's correct position in a sorted vector
void insertionSort(vector <int>& sorted)
{
    int last_inserted = sorted.size()-1;
    while(last_inserted > 0 && sorted[last_inserted] < sorted[last_inserted-1])
    {
        swap(sorted[last_inserted-1],sorted[last_inserted]);
        last_inserted--;
    }
}
// prints median out of a given stream of integer values
void printMedian(vector <int> stream)
{
    // vector to store values in sorted order
    // for printing of the median value
    vector <int> sorted;

    for(int i=0;i<stream.size();i++)
    {
        sorted.push_back(stream[i]);

        if(sorted.size() == 1)
        cout<<sorted[0]<<"\t";

        else
        {
            // sort the sorted vector
            insertionSort(sorted);

            // if number of elements recieved is odd
            // middle element is the median
            if(sorted.size()%2 == 1)
            {
                int mid = sorted.size()/2;

                cout<<sorted[mid]<<"\t";
            }
            // if size is even
            // average of middle two elements is the median
            else
            {
                int mid1 = (sorted.size()-1)/2;
                int mid2 = sorted.size()/2;

                cout<<(float)(sorted[mid1]+sorted[mid2])/2<<"\t";
            }
        }
    }
}
// main function to implement median of stream of integers
int main()
{
    int n;
    cout<<"\nEnter size : ";
    cin>>n;
    vector <int> stream;
    cout<<"\nEnter elements : ";
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        stream.push_back(ele);
    }
    cout<<"\nMedian : ";
    printMedian(stream);
    return 0;
}
