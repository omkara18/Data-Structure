#include<iostream>
using namespace std;
#define MAX 1000
int main()
{   int cnt,i,j,arr[MAX],temp;
    cout<<"Enter Size Of Array :: ";
    cin>>cnt;
    cout<<"\nEnter Array Elements :: ";
    for(i=0;i<cnt;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<cnt;i++)
    {  temp=arr[i];
       j=i-1;

         while (j>=0 && arr[j]>temp)
         {     arr[j+1] =arr[j];
               j--;
         }
         arr[j+1]=temp;
    }
    cout<<"Sorted Array Element Using Insertion Sort :: ";
    for(i=0;i<cnt;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}