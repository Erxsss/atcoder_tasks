#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),temp1(n), temp2(n) , need(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++) cin>>b[i];
    int s=0 , k=0, aldaa=0;
    while(s<n && k<n){
        if(a[s]==b[k]){
            s++;
            k++;
        }else{
            aldaa++;
            if(aldaa>1){
                cout<<"No";
                return 0;
            }
            if(a[s+1]==b[k]){
                s++;
            }else if(a[s]==b[k+1]){
                k++;
            }else{
                cout<<"No";
            }
        }
    }
    cout<<"Yes";
}
