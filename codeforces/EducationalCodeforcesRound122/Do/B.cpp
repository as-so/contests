
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        

        // int count[26];
        // vector<int> ct(26,0);
        
        // ahead matter more 
        // 6514
        // 1195


        // // 3 pairs !!!
        // // 4 pairs 
        // string ans;
        // reverse(s.begin(),s.end());
        int maxi = 0;
        int n = s.length();

        // 10^(n-1)
        // 10^(n-2)
        // 19
        // compare with prev
        // yz wx
        // 1195
        // 6145 
        // 6514
        // if it's reducing size 

        // 01 => 1
        // 02 => 2
        // 03 => 3
        // 09
        // 10 => 1
        // 11 => 2
        // 12
        // 13
        // 18 => 9

        // 19 => 10
        // 21 => 3
        // 22 =>
        // 28 => 10
        // 29 => 13
        // 99 => 18
        
        // vector<int> ansi
        // string ansi[n-1];
        // reverse()
        string a_b;
        string ans = "";
        bool flag = false;
        for(int i=n-1;i>=1;i--){
            int a = (int)(s[i-1]-'0');
            int b = (int)(s[i]-'0');
             a_b = to_string(a+b);
            if(a+b>10){
                ans = s.substr(0,i-1) + a_b + s.substr(i+1);
                flag = true;
                break;
            }
            //  if(a_b.length()==2){
            //      s[n-1]=b;
            //      s[n-2]=a;
            //  }
            //  else{
            //      s=s.substr(0,n-2)+a_b;
            //  }
            // s=s.substr(0,n-2)+a_b;
            // int lab = a_b.length();
            // ansi[i]=a_b;

            // if(lab==2){
            //     if(a_b[0]>a){
            //         flag = true;
            //         break;
            //     }
            // }
            // if(a+b>maxi){

            // } 

            // ct[s[i]-'a']++;
            // if(ct[s[i]-'a']==2){
            //     ans+=s[i];
            //     ans+=s[i];
            // }
        }
        // 2136
        // 336
        // 246
        // 219
        // 

        // 3
        // 2

        // 399
        // 2109
        // 2118



        // 18999
        // 91899

        // 

        // 15999
        // 91599
        // 99189
        // 99918

        // if there are only 2 digits changes
        // then we can change the right most

        // if there 
        


        // cout<<s<<endl;
        if(flag)
        cout<<ans<<endl;
        else{
            string ansi = "";
            for(int i=0;i<n-1;i++){
                int a = (int)(s[i]-'0');
                int b = (int)(s[i+1]-'0');
                if(a+b>(int)s[i]-'0'){

                    a_b = to_string(a+b);
                    // s.substr(0,i-1) + a_b + s.substr(i+1);
                    ansi+=s.substr(0,i) + a_b+s.substr(i+2); 
                    break;
                }

            }
            // cout<<s.substr(0,n-2)+a_b<<endl;
            cout<<a_b+s.substr(2)<<endl;
        }
        // ans
        // for(int i=0;i<26;i++){
        //     if(ct[i]==1){
        //         ans+=(char)'a'+i;
        //     }
        // }
        // cout<<ans<<endl;
    }
	return 0;
}

