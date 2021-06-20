#include<bits/stdc++.h>
using namespace std;
int lcs(string a,string b,int n,int m)
{
    if(n==0 || m==0)
        return 0;

    if(a[n-1] == b[m-1])
        return 1+lcs(a,b,n-1,m-1);

    return max(lcs(a,b,n-1,m),lcs(a,b,n,m-1));
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<lcs(s1,s2,n,m)<<endl;
    return 0;
}