#include <iostream>
#include <climits>
using namespace std;
void Shell_Sort(int A[],int n)
{
    int gap,i,j,temp;
    for(gap=n/2;gap>=1;gap/=2)
    {
       for(i=gap;i<n;i++)
       {
           temp = A[i];
           j = i-gap;
           while(j>=0&&A[j]>temp)
           {
               A[j+gap] = A[j];
               j = j-gap;
           }
           A[j+gap] = temp;
       }
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
    Shell_Sort(A,n);
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}
