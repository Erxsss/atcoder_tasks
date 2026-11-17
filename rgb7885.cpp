#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;

int main(){
    ll n,s, ans=0;
    cin>>n>>s;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll k=0; k<n; k++){
        for(ll o=k+1 ; o<n; o++){
            if((a[k]+a[o])%s==0){
                ans++;
            }
        }
    }
    cout<<ans;
}