
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        // int n;
        string s;
        cin>>s;
        int flag = 0;
        int n=s.length();
        if(n%2==1){
            flag=1;
        }
        else{
            int pos = n/2;
            flag =0;
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[i+n/2]){
                    flag=1;
                    break;
                }
            }

        }
        
        if(flag==1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
	return 0;
}

