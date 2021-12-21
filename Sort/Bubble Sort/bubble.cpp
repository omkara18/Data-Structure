#include<iostream>
using namespace std;
int main()
{
    int arr[50],i,j,temp,size;
    bool swap;
    cout<<"Size Of Array ::";
    cin>>size;
    cout<<endl;
    cout<<"Enter Element In Array ::";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size-1;i++)//[passing = size - 1]
    {
        swap = false;
        for(j=0;j<(size-i)-1;j++)
        {
            // compare two adjacent elements
            //Note: change '>' to '<' sort in descending
                if(arr[j]>arr[j+1])
                {
                   //swapping element 
                   temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp; 
                   swap =true;
                }
        }//inner for
        if(swap==false)
        {
            break;
        }
    }//outer 'for'
   cout<<endl;
   cout<<"Array Element  After Bubble Sort :: ";  
  for(i=0;i<size;i++)
  {  //Display Sorted Array In Ascending Order
      cout<<" "<<arr[i];
  }
return 0; }//end main