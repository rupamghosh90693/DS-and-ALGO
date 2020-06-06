
//this is the warn-up code in hackerrank
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,temp,i=0,jump=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);

    }
    i=0;jump=0;
    while(i<n-1)
    {
             if(v[i+2]==1)
             {
                i++;
                jump++;
             }
             else
             {
                   i=i+2;
                   jump++;
             }
     }
    cout<<jump;
}