#include "bits/stdc++.h"
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    int n;
    cin>>n;
    int arr[n];
    int hash[10000] = {0};
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        hash[arr[i]]++;
    }
      for(int i=1;i<=n;i++)
      {
          if(hash[i]==2)
              cout<<"Repeating number is "<<i<<endl;
          if(hash[i]==0)
              cout<<"Missing number is "<<i<<endl;
      }

    return 0;
}