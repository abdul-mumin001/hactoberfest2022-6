#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
void Swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void Selection_Sort(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
      for(j=k=i;j<n;j++)
      {
         if(A[j]<A[k])
            k = j;
      }
      swap(A[i],A[k]);
    }
}
void PrintArray(int A[],int n)
{
    for(int j=0;j<n;j++)
    {
       cout<<A[j]<<" ";
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
    Selection_Sort(A,n);
    PrintArray(A,n);
return 0;
}
