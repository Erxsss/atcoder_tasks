#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
    int n , w , ans=0;
    cin>>n>>w;
    vector<ll> a(n), b(n);
    for(int s=0 ; s<n; s++) {
        cin>>a[s]>>b[s];
    }
    int subs=1<<n;
    for(int i=0 ; i<subs; i++){
        int value=0, vol=0; 
        for(int k=0; k<n; k++){
            if(i&(1<<k)){
                value+=a[k];
                vol+=b[k];
            }
        }
        if(vol<=w && ans<value){
            ans=value;
        }
    }
    cout<<ans;
}