// print arr element 

#include<iostream>
using namespace std;

// int printans(int arr[], int n, int i)
// {
//     // base 
//     if(i>=n)
//     {
//         return 0;
//     }

//     cout<< arr[i] << " ";

//     // recursive relations 

//     printans(arr, n, i+1);
// }


int printans(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }

    cout<< arr[0] << " ";

    printans(arr+1, n-1);
}

int main()
{
    int arr[10] = {10,20,30,40,50,60,70,800,90,110};
    int n= 10;
    int i=0;

    printans(arr,n);
}

