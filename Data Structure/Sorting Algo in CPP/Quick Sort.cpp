#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
int Partition(int A[],int l,int h)
{
    int pivot = A[l];
    int i = l, j = h;
    do
    {
      do{i++;} while (A[i]<=pivot);//Finding Largest Elements
      do{j--;} while (A[j]>pivot);//Finding Smaller Elements
      if(i<j)
        swap(A[i],A[j]);
    } while (i<j);
    swap(A[l],A[j]);
    return j;
}
void Quick_Sort(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j = Partition(A,l,h);
        Quick_Sort(A,l,j);
        Quick_Sort(A,j+1,h);
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];//11 13 7 12 16 9 24 5 10 3
    cout<<"Enter Elements\n";
    for(int i=0;i<n-1;i++)
    {
      cin>>A[i];
    }
    A[n] = INT32_MAX;
    Quick_Sort(A,0,n-1);
    for(int i=0;i<n-1;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}
