#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1 ; i<=n; i++){
        for(int k=0 ;k<n; k++){
            if(k%2==0){
                cout<<k*n+i<<" ";
            }else{
                cout<<(k+1)*n-i+1<<" ";
            }
        }
        cout<<endl;
    }
}