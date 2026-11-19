#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    b=a;
    for(int x=0 ; x<n; x++) cin>>a[x];

    for(int i=n-1 ; i>=0; i--){
        if(a[i]>a[i-1]){
            reverse(a.begin()+i,a.end());
            if(a[i]>a[i-1]){
                swap(a[i],a[i-1]);
                break;
            }else{
                swap(a[i-1],a[i+1]);
                break;
            }
        }
    }
    
    for(int s=0 ; s<n ; s++){
        cout<<a[s]<<" ";
    }
}