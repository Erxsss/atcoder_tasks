#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;

int32_t main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll s=0 ; s<n; s++){
        cin>>a[s];
    }
    for(ll k=0 ; k<n; k++){
        ll sum=0;
        for(ll i=1 ; i<=a[k]; i++){
            if(a[k]%i==0){
             sum++;
            }
        }
        cout<<sum<<endl;
    }
}