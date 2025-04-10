#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findvalues(vector<int>arr, int size, int i, int& maxi)
{
    if(i>=size)
    {
        return 0;
    }

    if(arr[i]>maxi)
    {
        maxi = arr[i];
    }

    findvalues(arr,size,i+1,maxi);
}

int main()
{
    int size;
    cout<< " Enter the size of the array : ";
    cin>>size;

    vector<int>arr(size);

    for(int i=0; i<arr.size(); i++)
    {
        cout<< "Enter the element of the array : ";
        cin>>arr[i];
    }

    int i=0;
    int maxi = INT_MIN;
    int ans = findvalues(arr,size, i, maxi);
    cout<< endl;
    cout << " maximum number of the array is : " << maxi << endl;
}