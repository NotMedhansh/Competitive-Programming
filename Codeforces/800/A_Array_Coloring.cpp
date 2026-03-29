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
        
        int sum=0;
        bool istrue=false;
        if(n>2){
            for(int i=0;i<n;i++){
                sum+=a[i];
            }
            if(sum%2==0){
            cout<<"YES\n";
            }
            else{
            cout<<"NO\n";
            }
        }
        else{
            for(int i=1;i<n;i++){
                
                    if(a[i]%2==0 && a[i-1]%2==0){
                        istrue=true;
                    }
                    else if(a[i]%2==1 && a[i-1]%2==1){
                        istrue=true;
                    }
            }
            if(istrue){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        
    }
}