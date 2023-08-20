#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[100];
    for(i=0;i<3;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<arr[i];
    }
    return 0;
    

}
