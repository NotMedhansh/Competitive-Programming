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
        int diff=INT_MAX;
        int mindiff=diff;
        if(is_sorted(a.begin(),a.end())){
            for(int i=1;i<n;i++){
                
                diff=a[i]-a[i-1];
                mindiff=min(diff,mindiff);
            }
            cout<<(mindiff/2)+1<<"\n";
        }
        else{
            cout<<"0\n";
        }
        
        
    }
}