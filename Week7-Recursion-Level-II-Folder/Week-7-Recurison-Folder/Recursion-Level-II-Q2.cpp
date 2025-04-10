#include<iostream>
using namespace std;

int findstair(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    int ans = findstair(n-1)+findstair(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int ans = findstair(n);

    cout<< " ans is : " << ans << endl;
}