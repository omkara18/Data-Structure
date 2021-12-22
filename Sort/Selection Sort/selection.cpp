#include<iostream>
using namespace std;
#define MAX 1000
int main()
{   int arr[MAX], cnt,i,j,min,loc,temp;
    cout<<"Enter Size Of Array :: ";
    cin>>cnt;// Size::4
    cout<<"Enter Array Element ";//Element :: 5 4 3 2 indexes::0 1 2 3
    for(int i=0;i<cnt;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<cnt-1;i++)//Maximum Passing = cnt-1
    {    min=arr[i]; //min=5
         loc=i;    //loc: 0
        for(j=i+1;j<cnt;j++)//j=2
        {
            if(arr[j]<min)
            {
                min =arr[j];
                 loc =j; //j=2              
            }
            temp =arr[i];//temp = 0
            arr[i]=arr[loc];//i=2
            arr[loc]=temp;//loc=2
        }
    }
    cout<<"Sorted Element Using Selection Sort ::";
    for(int i=0;i<cnt;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}