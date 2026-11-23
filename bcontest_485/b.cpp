#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n , m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0 ; i<n; i++){
        for(int k=0 ; k<m ; k++){
            cin>>a[i][k];
        }
    }
    for(int i=0; i<n; i++){
        bool zov=false;
        for(int k=0; k<m ; k++){
            if(a[i][k]=='x'){
                continue;
            }else{
                zov=true;
                break;
            }
        }
        if(zov==false){
            cout<<"Faucet "<<i+1;
        }
    }
    for(int s=0; s<m; s++){
        bool zov=false;
        for(int l=0; l<n ; l++){
            if(a[l][s]=='x'){
                continue;
            }else{
                zov=true;
                break;
            }
        }
        if(zov == false){
            cout<<"Drain "<<s+1;
        }
    }
}