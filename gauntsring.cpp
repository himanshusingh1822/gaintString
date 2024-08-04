
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,p,q,r;
    cin >> n >> p >> q >> r;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long int pmax[n];
    pmax[0]=p*a[0];
    for(int i=1;i<n;i++){
        pmax[i]=max(pmax[i-1],p*a[i]);
    }
    long long int smax[n];
    smax[n-1]=r*a[n-1];
    for(int i=n-2;i>=0;i--){
        smax[i]=max(smax[i+1],r*a[i]);
    }
    long long int ans = INT_MIN;
    for(int i=0;i<n;i++){
        ans = max(ans,pmax[i]+q*a[i]+smax[i]);
    }
    cout << ans;
    return 0;
}
