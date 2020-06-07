#include<iostream>
#include <bits/stdc++.h>

#include<vector>
using namespace std;
int main()
{
    int a[6][6],sum=0,max=0;
    vector<int>v;
     for (int i = 0; i < 6; i++) {


        for (int j = 0; j < 6; j++) {
            cin >> a[i][j];
        }


    }

    for(int j=1;j<=4;j++)
    {
        for(int k=1;k<=4;k++)
        {
            sum=a[j][k]+a[j-1][k-1]+a[j-1][k]+a[j-1][k+1]+a[j+1][k-1]+a[j+1][k]+a[j+1][k+1];

            v.push_back(sum);
        }
    }
    max=v[0];
    for(int i=1;i<16;i++)
    {

        if(v[i]>max) max=v[i];


    }
    cout<<max;



}
