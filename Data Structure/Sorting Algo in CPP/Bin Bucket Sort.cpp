#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
protected:
private:
};
void Display(Node *p)
{
    if(p)
    {
      Display(p->link);
      cout<<p->data<<" ";
    }
}
int findMax(int A[],int n)
{
    int L = A[0];
    for(int i=1;i<n;i++)
    {
       if(A[i]>L)
        L = A[i];
    }
    return L;
}
void Bin_Bucket_Sort(int A[],int n)
{
   int Max = findMax(A,n);
   Node *H[Max];
   int SArr[Max];
   for(int i=0;i<Max+1;i++)
   {
      H[i] = 0;
   }
   for(int i=0;i<n;i++)
   {
     cout<<H[i]<<" ";
   }cout<<endl;
   for(int i=0;i<n;i++)
   {
      Node *t = new Node;
      Node *p = NULL;
      t->data = A[i];
      t->link = NULL;
      H[A[i]] = t;
   }
   for(int i=1;i<Max+1;i++)
   {
      cout<<H[i]->data<<" ";
   }
}
int main()
{
    Node *t;
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Bin_Bucket_Sort(A,n);
return 0;
}
