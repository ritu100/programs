/* c++ program for array rotation */

#include <iostream>
using namespace std;

int main()
{
	int n;

	cout<<"Enter array size : "<<endl;
	cin>>n;
	int arr[n];
    int noOfRotations,i;
    cout<<"\nEnter no of rotations : ";
    cin>>noOfRotations;
	//input array elements
	cout<<"\nEnter array elements : ";
	for(i=0;i<n;i++)
		cin>>arr[i];

    cout<<"Array elements before rotation : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	//print the elements of array after rotation
	cout<<"\nArray elements after rotation : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[(i+noOfRotations)%n]<<" ";
	}

	return 0;
}
