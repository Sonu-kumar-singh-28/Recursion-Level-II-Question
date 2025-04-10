#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


void findmini(vector<int>arr,int size, int i, int& mini)
{
    if(i>=size)
    {
        return;
    }

    if(arr[i]<mini)
    {
        mini = arr[i];
    }


    findmini(arr,size, i+1, mini);
}


int main()
{
    int size;
    cout<< "ENter the size of the array : ";
    cin>>size;

    vector<int>arr(size);

    for(int i=0; i<arr.size(); i++)
    {
        cout<< "Enter the element of the array : ";
        cin>>arr[i];
    }

    int i=0;
    int mini = INT_MAX;
    findmini(arr,size,i, mini);

    cout<< "The Ans is : " << mini << endl;
}