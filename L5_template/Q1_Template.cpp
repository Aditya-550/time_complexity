#include<bits/stdc++.h>
#include "L5_Q1_2022A7PS0131G.cpp"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        cout<<solve(v)<<endl;
    }
}
