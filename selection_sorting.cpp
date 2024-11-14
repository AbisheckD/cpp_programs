#include<iostream>
using namespace std;

int main()
{
    int i, j, t=0, size, min_value;
    cout<<"Enter the array size :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements :"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<size; i++)
    {
        int min_value = i;
        for(j=i+1; j<size; j++)
        {
            if(arr[min_value] > arr[j])
            {
                min_value = j;
            }
        }
        t = arr[min_value];
        arr[min_value] = arr[i];
        arr[i] = t;
    }
    cout<<"Array elements after sorting :"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
