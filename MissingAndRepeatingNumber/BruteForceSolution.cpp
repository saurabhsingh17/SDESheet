#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int n,remember,missing;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    for(int i=0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1]) ==0)
            remember=i;
        if(abs(a[i]-a[i+1]) ==2)
            missing=a[i]+1;
    }
    cout<<a[remember]<<" "<<missing<<endl;
    return 0;
}