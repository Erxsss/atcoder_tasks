#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    vector<int> a(q),b(n);
    for(int i=0 ; i<q; i++){
        cin>>a[i];
    }
    for(int l=0 ; l<n; l++){
        b[l]=l+1;
    }
    for(int k=0 ; k<q; k++){
        reverse(b.begin(), b.begin()+a[k]);
        for(int s=0; s<a[k];s++ ){
                b[s]*=-1;
        }
    }
    for(int p=0 ; p<n; p++){
        cout<<b[p]<<endl;
    }
}