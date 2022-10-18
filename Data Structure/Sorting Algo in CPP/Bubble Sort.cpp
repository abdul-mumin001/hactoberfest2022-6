#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
void Bubble_Sort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-1-i;j++)
       {
          if(A[j]>A[j+1])
          swap(A[j],A[j+1]);
       }
    }
}
void Bubble_Sort_ifSorted(int A[],int n)
{
    int Flag;
    for(int i=0;i<n-1;i++)
    {
        Flag=0;
       for(int j=0;j<n-1-i;j++)
       {
          if(A[j]>A[j+1]){
          swap(A[j],A[j+1]);
          Flag=1;
          }
       }
       if(Flag==0)break;
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
   //Bubble_Sort(A,n);//Max Time = O(N^2) , Min Time = O(N)
    Bubble_Sort_ifSorted(A,n);//Min Time = O(N) , Max Time = O(N^2)
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}
