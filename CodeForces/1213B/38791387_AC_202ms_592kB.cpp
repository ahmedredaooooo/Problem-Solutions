#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ct;
    cin>>t;
    while(t--)
    {
        int lo=INT_MAX;
        ct=0;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        for(int i=n-1 , lo=a[i]; i>=0 ; i--)
           (a[i]>lo) ? ct++ : lo=a[i];

        cout<<ct<<endl;
    }
}
