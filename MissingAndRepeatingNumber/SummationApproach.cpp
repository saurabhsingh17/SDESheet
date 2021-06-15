#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    long long n,linearSummation,quadraticSummation,cubicSummation,missing;
    cin>>n;
    int a[n],sum=0,sqSum=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
        sqSum+=pow(a[i],2);
    }
    linearSummation=(n*(n+1))/2;
    quadraticSummation=n*(n+1)*((2*n)+1);
    quadraticSummation/=6;
    long oldValue=linearSummation-sum;
    long newValue=quadraticSummation-sqSum;
    long value=newValue/oldValue;
    missing=(value+oldValue)/2;
    cout<<"Missing is "<<missing<<endl;
    cout<<"Repeating is "<<abs(value-missing)<<endl;
    return 0;
    }