
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        if(n==2){
            if(s[0]==s[1]){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            // E a1=a2n=a3=a4=
            //  a1=a2=a3
            int counte=0,countn=0;
            for(int i=0;i<n;i++){
                if(s[i]=='E'){
                    counte++;
                }
                else{
                    countn++;
                }
            }
            if(countn==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

        }
        /*
        else if(s[n-1]=='E'){

        }
        for(int i=0;i<n;i++){

        }
        */
    }
	return 0;
}

