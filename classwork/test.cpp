#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int> p(n), b;
    queue<int> a;
    for(int i=0 ; i<n; i++){
        cin>>p[i];
    }
    for(int k=0 ; k<n; k++){
        if(p[k]%2==0){
            a.push(p[k]);
        }else{
            b.push_back(p[k]);
        }
    }
    for(int s=0 ; s<a.size() ; s++){
        cout<<a[s]<<" ";
    }
    cout<<endl;
    for(int o=0 ; o<b.size() ; o++){
        cout<<b[o]+1<<" ";
    }
}