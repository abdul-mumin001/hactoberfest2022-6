#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int FindMax(int A[],int n)
{
    int Max = A[0];
   for(int i=1;i<n;i++)
   {
      if(A[i]>Max)
      Max = A[i];
   }
   return Max;
}
void Cout_Sort(int A[],int n)
{
   int Max = FindMax(A,n);
   int C[Max+1];
   for(int i=0;i<Max+1;i++)
     C[i] = 0;
   // Marked Present in C array
   for(int i=0;i<n;i++)
      C[A[i]]++;
   //Copied Present in array A;
   int k = 0,j = 0;
   while(k<Max+1)
   {
      if(C[k]>0){
        A[j++] = k;
        C[k]--;
      }
      else
        k++;
   }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Cout_Sort(A,n);
    // Sorted Elements...
    cout<<"Sorted Elements Is: ";
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}
