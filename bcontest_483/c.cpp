#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
    ll n, m;
    cin>>n>>m;
    vector<ll> a(m), b(m) , s(n) , ans(n);
    for(ll i=0 ; i<m; i++){
        cin>>a[i]>>b[i];
    }
    for(ll num=1; num<=n ; num++){
        fill(s.begin(),s.end(),0);
        for(ll c=0 ; c<m ; c++){
            if(a[c]!=num){
                s[a[c]-1]+=1;
            }else{
                s[b[c]-1]+=1;
            }
        }
        ll max_ind=0 , max=s[0];
        for(ll ih=1 ; ih<n; ih++){
            if(s[ih]>max){
                max_ind=ih;
                max=s[ih];
            }
        }
        ans[num-1]=max_ind+1;
    }
    for(ll hev=0 ; hev<n; hev++){
        cout<<ans[hev]<<endl;
    }
}