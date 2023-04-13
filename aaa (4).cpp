
#include <iostream>

using namespace std;

bool find_target(int arr[][3],int target,int row ,int col)
{
    int s=0;
    int e=(row * col)-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        int element=arr[mid/col][mid%col];
        if(element==target)
        {
            return 1;
        }
        else if(target>element)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}
int main()
{
    int arr1[3][3];
    cout<<"enter the elements: \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Your matrix is : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
    int tar;
    cout<<"The the elment to search :\n";
    cin>>tar;
    if(find_target(arr1,tar,3,3))
    {
        cout<<"It is present.";
    }
    else
    {
        cout<<"It is not present: ";
    }
    return 0;
}
