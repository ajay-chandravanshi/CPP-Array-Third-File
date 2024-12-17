#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,3,4};
    int j=0;
    for(int i=0;i<5;++i)
     {
            if(arr[i]!=1)
            {
            arr[j]=arr[i];
            j++;
            }
        }
    for(int i=0;i<j;++i)
    {
         cout<<arr[i];
    }
  
}
