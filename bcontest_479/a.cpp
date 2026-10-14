#include<bits/stdc++.h>
#define ll long long
#include<vector>
using namespace std;

int main(){
    ll n, w , res=0;
    cin>>n>>w;
    vector<ll> a(n),b(n);
    for(ll i=0 ; i<n; i++){
        cin>>a[i]>>b[i];
    }
    ll subsets=1<<n;
    for(ll s=0 ; s<subsets ; s++){
        ll max=0, v=0;
        for(ll m=0; m<n; m++){
            if(s&(1<<m)){
                max+=a[m];
                v+=b[m];
            }
        }
        if(max>res && v<=w){
            res=max;
        }
    }
    cout<<res;
}