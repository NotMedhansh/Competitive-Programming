#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int txor=0;
        for(int i=0;i<n;i++){
            txor^=a[i];
        }
        if(n%2==0){
            if(txor==0){
                cout<<txor<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
        else{
            cout<<txor<<"\n";
        }
    }
}