#include<iostream>
using namespace std;


int fabbonaci(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    // base 

    int ans = fabbonaci(n-1) + fabbonaci(n-2);
    return ans;
}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    cout<< " The Factorial is : "  << n << endl;

    // base 

    int ans = n*factorial(n-1);
    return ans;
}


int counting(int n)
{
    if(n==0)
    {
        return 0;
    }

    // recursive relation 

    int ans = counting(n-1);
    return ans;
}

int main()
{
    int n;
    cout<<" Enter the count of the number : ";
    cin>>n;

    // int ans = counting(n);
    // int ans =  factorial(n);
    // cout<< ans   << endl;


    int ans = fabbonaci(n);
    cout << n << "th term is : " << ans << endl;
}