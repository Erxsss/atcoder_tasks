#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
ll n , w ,res=0;
vector<ll> a(20), b(20);

void solve(ll ind , ll vol , ll val){
    if(ind==-1){
        if(vol<=w && val>res) res=val;
        return ;
    }
    solve(ind-1 , vol , val);
    solve(ind-1, vol+b[ind], val+a[ind]);
}

int main(){
    cin>>n>>w;
    for(ll i=0 ; i<n; i++){
        cin>>a[i]>>b[i];
    }
    solve(n-1, 0 , 0);
    cout<<res;
}
