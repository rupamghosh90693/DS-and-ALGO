#include<iostream>
using namespace std;
int main()
{
    long long n,result,a=0,b=0,extra=0,c=0;
    string s;
    cin>>s;
    cin>>n;
    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]=='a') a++;
    }
    b=n/(int)s.size();

    extra=n-(b*(int)s.size());

    for(int j=0;j<extra;j++)
    {
        if(s[j]=='a') c++;
    }
    result=a*b;
    cout<<result+c;
}
