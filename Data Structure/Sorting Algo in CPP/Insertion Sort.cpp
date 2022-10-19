#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
void Insertion_Sort(int A[],int n)
{
    int j,x;
    for(int i=1;i<n;i++)
    {
       j = i-1;
       x = A[i];
       while(j>-1 && A[j]>x)
       {
          A[j+1] = A[j];
          j--;
       }
       A[j+1] = x;
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
    Insertion_Sort(A,n);
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }
return 0;
}
