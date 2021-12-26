// links 
// https://www.geeksforgeeks.org/substring-in-cpp/




#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    // string s[1e6];
    // int precomp[1e6][1e6];

    
    // for(int i=0;i<n;i++){

    // }

    while(t--){
        int n,k;
        cin>>n>>k;
        string s_;
        cin>>s_;
        string a[n];
        for(int i=0;i<n;i++){
            a[i]=s_[i];
        }
        // int seq[n];
        vector<int> seq(k,0);
        int ite = 1;
        for(int i=k-1;i>=0;i-=2){
            seq[i]=ite;
            ite++;
        }
        // if already filled then fill in next one
        // if K is odd we start filling from 1
        int st = 0;
        if(k%2==1){
           st=1; 
        }
        for(int i=st;i<k;i+=2){
            seq[i]=ite;
            ite++;
        }
        // char arr[n];
        // vector<string> arr(n,'a');
        // for(int i=0;i<k;i++){
        //     cout<<seq[i]<<" ";
        //     // seq[i]=a[i];
        //     // arr[i]=a[seq[i]];
        // }
        // cout<<endl;
        string ans="";
        string ansi = "";
        for(int i=0;i<k;i++){
            ans+=a[seq[i]-1];
            // ans+=(char)a[seq[i]];
            // ansi+=to_string((char)a[seq[i]]);
        }
        for(int i=k;i<n;i++){
            ans+=s_[i];
        }
        // cout<<endl;
        // simulate the process ??
        // for(int i=k-1;i>0;i--){
        //     // cout<<s_<<endl;
        //     string temp = s_.substr(0,i+1);
        //     reverse(temp.begin(),temp.end());
        //     s_ = temp + s_.substr(i+1);
        // }
        cout<<ans<<endl;
        // cout<<ansi<<endl;
        // 1234567
        // 34251
        // 435261
        // 4536271
        // 
        // if k is odd then we leave 
        //
    }
}
