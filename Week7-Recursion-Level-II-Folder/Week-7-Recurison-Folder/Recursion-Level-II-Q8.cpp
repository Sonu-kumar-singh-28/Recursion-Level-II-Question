#include<iostream>
using namespace std;

void findans(int n)
{
    if(n == 0)
    {
        return ;
    }

    int newvalueofn(n/10);
    findans(newvalueofn);
    int digits = n%10;
    cout<< digits << " ";
  
}

int main()
{
    int n;
    cout<< "ENter the number : ";
    cin>>n;

     findans(n);
}