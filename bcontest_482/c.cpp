#include<bits/stdc++.h>
#define ll long long
#include<vector>
using namespace std;

int main(){
    ll h ,w,n,q;
    cin>>h>>w>>n>>q;
    vector<ll> a(h+1), b(w+1);
    fill(a.begin(), a.end(), 0);
    fill(b.begin(), b.end(), 0);
    for(ll i=0 ; i<n; i++){
        ll temp1 , temp2;
        cin>>temp1>>temp2;
        a[temp1]+=1;
        b[temp2]+=1;
    }
    while(q>0){
        ll test, u , d;
        cin>>test>>u>>d;
        if(test==1){
            ll sum=0;
            for(ll k=u ; k<=d ; k++){
                sum+=a[k];
            }
            cout<<sum<<endl;
        }else{
            ll sum=0;
            for(ll m=u; m<=d; m++){
                sum+=b[m];
            }
            cout<<sum<<endl;
        }
        q--;
    }
}