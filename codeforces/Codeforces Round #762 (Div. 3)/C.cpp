
#include <bits/stdc++.h>
using namespace std;

// long long add(long long a,long long b){
//     long long ans = 0;
//     return 0;

// }
string adds(long long a,long long b){
    string ans = "";
    while(a>0 || b>0){
        long long rem = (a%10)+(b%10);
        string rems = to_string(rem);
        // if(ans.length()>18 && ){
        //     return "-1"
        // }
        ans=rems+ans;
        a/=10;
        b/=10;
        
    }
    // length is 19 but it's greater than 1e18

    if(ans.length()>18){
        
        int flag = 0;
        if(ans[0]!='1'){
            flag = 1;
        }
        if(ans.length()>19){
            flag=1;
        }
        for(int i=0;i<ans.length();i++){
            if(ans[i]!='0'){
                flag=1;
            }
        }
        if(flag==1){
            return "0";
        }
        else{
            return ans;
        }
        
    }
    else{
        return ans;
    }
}
string subs(long long s,long long a){
    string ans = "";
    // int flag = 0;
    // if a runs out then just add whatever is left in s;
    // 11069    11
    //. 1723   6
    //.      5

    //.   12
    //    21
    //     9
    //    1 
    //   19
    //    110

    // a
    // b
    // cd. d>a
    // 
    // 8
    //9 +9 => 18
    while(s>0 || a>0){
        long long rem = (s%10)-(a%10);
        if(rem<0){
            rem=(s%100)-(a%10);
            s/=100;
            a/=10;
            if(rem<0){
                // flag = 1;
                return "-1";
            };
        }
        else{
            s/=10;
            a/=10;
        }
        string rems = to_string(rem);
        ans=rems+ans;
        // a/=10;
        // b/=10;
    }
    // if(flag == 1){
    //     return "-1";
    // }
    // if(ans.length()>19){
    //     return "0"
    // }
    // else{
    //     return ans;
    // }
    return ans;
    
}

int main() {
	// your code goes here
    // make same length
    // l <- r
    int t;
    cin>>t;
    // cout<<adds(17236,3465);
    while(t--){
        long long a,s;
        cin>>a>>s;
        // int b; //??
        //a+b=s
        string anss = subs(s,a);
        // cout<<anss<<endl;
        long long ansi = stoll(anss);
        // cout<<"ans : "<<ansi<<endl;
        // 1e18 19 digits but still fits.
        // >18 wrong
        //
        if(stoll(adds(ansi,a))==(s)){
            cout<<ansi<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        // cout<<<<endl;

    }
	return 0;
}

