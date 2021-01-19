/* c++ program for union and intersection of arrays */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(int set[],int size)
  {
     int i;
     printf("{");
     for(i=0;i<size;i++)
      {
    cout<<set[i]<<", ";
      }
	 cout<<"}";

  }

 int Union1(int set1[],int set2[],int size1,int size2,int set3[])
    {
	 int i,j;
	  int limit=0;
	   for(i=0;i<size1;i++)
	    {

	      set3[limit++]=set1[i];

	    }
	    for(i=0;i<size2;i++)
	    {
	      for(j=0;j<size1;j++)
	      {
		    if(set2[i]==set1[j])
		     {
		        break;
		     }
          }

	      if(j==size1)
	      {
	       set3[limit++]=set2[i];

	      }
	    }
	    return limit;
	  }

     int Intersection(int set1[],int set2[],int size1,int size2,int set4[])
     {
	 int i,j;
	 int limit=0;
	 for(i=0;i<size1;i++)
	     {
	       for(j=0;j<size2;j++)
		{
		  if(set1[i]==set2[j])
		  {
		    set4[limit++]=set1[i];

		  }

	       }
	    }
	   return limit;

       }

int main()
{
    int size1,size2,i,j,limit1,limit2;
    cout<<"\nEnter size for set 1 and set 2:";
    cin>>size1>>size2;
    int set1[size1],set2[size2],set3[size1+size2],set4[size1];
    cout<<"\nEnter elements for set 1 in sorted order:";
    for(i=0;i<size1;i++)
    {
       cin>>set1[i];
        for(j=i-1;j>=0;j--)
	     {
	       if(set1[i]==set1[j])
	       {
	       	  cout<<"\nset contains unique elements only !! \nEnter previous element again : ";
		      i--;
		break;
	       }
	     }
    }

    sort(set1,set1+size1);


    cout<<"\nEnter elements for array 2 in sorted order:";
    for(i=0;i<size2;i++)
    {
        cin>>set2[i];
        for(j=i-1;j>=0;j--)
	     {
	       if(set2[i]==set2[j])
	       {
	       	  cout<<"\nset contains unique elements only !! \nEnter previous element again : ";
		      i--;
		      break;
	       }
	     }
    }

    sort(set2,set2+size2);

    cout<<"\nset 1 = ";
    display(set1,size1);
    cout<<"\nset 2 = ";
    display(set2,size2);

    limit1=Union1(set1,set2,size1,size2,set3);
    cout<<"\nUnion = ";
    display(set3,limit1);
    limit2=Intersection(set1,set2,size1,size2,set4);
    cout<<"\nIntersection = ";
    display(set4,limit2);
    return 0;
}
