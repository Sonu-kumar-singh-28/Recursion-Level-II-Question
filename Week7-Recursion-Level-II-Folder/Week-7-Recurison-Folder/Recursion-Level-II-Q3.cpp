#include<iostream>
using namespace std;

int findstairs(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    int ans = findstairs(n-1) + findstairs(n-2);
    return ans;
}

int main()
{
    int arr[10] = {10,20,30,40,50};
    int n;
    cout<< " Enter the number : ";
    cin>>n;

    // int ans = findstairs(n);
    //cout << " The ways to reach the term is : "<< ans << endl;


    for(int i=0; i<10; i++)
    {
        cout<< arr[i] << endl;
    }


} 