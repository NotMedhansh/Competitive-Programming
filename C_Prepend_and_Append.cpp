#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left=0;
        int right=s.length()-1;
        if(left==right){
            cout<<n<<"\n";
        }
        else{
            int count=n;
            while(left<right){
                if(left!=right){
                    count=n-2;
                }
                left++;
                right--;
            }
            cout<<count<<"\n";
        }
    }
}