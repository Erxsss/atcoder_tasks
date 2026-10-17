#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
    ll n, m;
    cin>>n>>m;
    vector<string> a(n), b(m);
    vector<ll> num(n,0);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int s=0 ; s<m ; s++){
        cin>>b[s];
    }
    for(int p=0 ; p<m ; p++){
        int aldah=0 , nemhInd;
        int k;
        bool bolts=false;
        for( k=0 ; k<n ; k++){
            if(a[k].size()!=b[p].size()){
                continue;
            }
            if(b[p]==a[k]){
                num[k]++;
                bolts=true;
                break;
            }
            else{
                int diff=0;
                for(int w=0; w<a[k].size(); w++){
                    if(a[k][w] != b[p][w]){
                        diff++;
                    }
                }
                if(diff==1){
                    nemhInd=k;
                    aldah++;
                }
            }
        }
        if(bolts){
            continue;
        }
        if(aldah==1){
            num[nemhInd]++;
        }
    }
    for(int l=0 ; l<n; l++){
        cout<<num[l]<<endl;
    }
}
