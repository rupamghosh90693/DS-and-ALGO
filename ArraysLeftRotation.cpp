#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n,d,i,j,k,m,temp=0,b[100000];
    vector<int>v;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);

    }
    for(k=0;k<n;k++)
    {
         b[(k-d+n)%n]=v[k];
    }
    for(m=0;m<n;m++)
    {

        cout<<b[m];
        cout<<" ";
    }
}
