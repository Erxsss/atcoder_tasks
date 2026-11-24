#include<iostream>
#include<vector>
#define ll long long
using namespace std;
ll n , w , ans=0;
vector<ll> a(20),b(20);
void find(ll n , ll val , ll vol){
    if(n==-1){
        if(vol<=w && val>ans){
            ans=val;
        }
        return ; 
    }
    find(n-1, val, vol);
    find(n, val+a[n], vol+b[n]);
}
int main(){
    cin>>n>>w;
    for(int i=0 ; i<n; i++){
        cin>>a[i]>>b[i];
    }
    find(n-1 , 0 , 0);
    cout<<ans<<"adsf";
}