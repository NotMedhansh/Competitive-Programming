#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int gd=0;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            gd+=a[i];
        }
        gd=-gd;
        cout<<gd<<"\n";
    }
}