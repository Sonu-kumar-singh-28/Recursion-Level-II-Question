#include<iostream>
using namespace std;
bool checkkeys(string s, int n ,char checkkey, int i, int& count){

    if(i>=n)
    {
        return false;
    }

    if(s[i] == checkkey)
    {
        count++;
    }

   bool ans = checkkeys(s, n,checkkey, i+1,count);
   return ans;
}
int main()
{
    string s;
    cout<< "Enter the String name : ";
    getline(cin,s);

    int n = s.length();
    char checkkey;
    cout<<" Enter the find char : ";
    cin>>checkkey;
    int i=0;
    int count =0;
   bool ans = checkkeys(s, n,checkkey,i,count);

   cout<< count <<endl;
   cout<< " ans is : " << ans << endl;
}