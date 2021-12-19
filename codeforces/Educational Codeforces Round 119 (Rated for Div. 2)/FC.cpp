
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        string s;
        cin>>s;
        long long counta=0,count_=0;
        string s1="";
        // vector<int> posa;
        // vector<int> pos_;

        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                counta++;
                s1+='a';
                // posa.push_back(i);

            }
            else{
                // pos_.push_back(i);
                count_++;
            }
        }
        // ** a ** a **
        // ** a ** a
        // *a a**    
        // * a * a ** a *** a **

        //abb
        //bab 
        // ** a *** a **
        // baa
        // abab
        // binary representation

        // fixing a 1 at the end then doing the same 
        // thing 1
        // x=len-[1 % len -1]
       //.      0000 x=1 
        //         1 x=2 =1
        //        10 x=3
        //.      100 x=4 
        //.     1000 x=5 =>1

        //1000000000 x= 
        // len.
        //0000000002
        //        11
        // 000000101 
        // set bits > no. is greater


        // abbbbbbb bbbbbbb
        // 2 * => 2*k b's at the last
        // that is wrong ?
        // abb>ba
        // ba
        // replace * with b everywhere one by one
        // & remove the prev b !
        // 



        // atleast 1 a
        // start replacing * with b
        if(x==1){
            cout<<s1<<"\n";
        }
        else{
            // to add b from the back !!
            // until we run out of k !
            // string temp = "";
            // in s1 replace last *'s
            // with b until we reach xth lex

            // a*a
            // a**A
            // a*ba
            bool first=false,last=false;
            if(s[0]=='*'){
                first=true;
            }
            if(s[n-1]=='*'){
                last=true;
            }

            int count_dif = 0;
            char prev = 'a';
            for(int i=0;i<n;i++)
            {
                if(s[i]=='*' && prev != '*'){
                    count_dif ++;
                }
                prev=s[i];
            }
            // if(count_*b>x){
            //     //
            // }
            // count_dif => b
            // rightmost * replace it with 2b's 
            // 
            // for(int i=pos_.size()-1;i>=0;i++){
            //     s[i]='b';
            // }
            x--;
            long long len = count_dif;
            long long div = x/len;// -1 
            // iterations until we incr last by 1
            // add from last
            // 2
            // 0
            // 1

            long long modi = x%len;

            for(int i=0;i<n;i++){
                
            }

            // after every len we add 1 to last
            long long divk = div/k; // no. of last filled *


            long long modk = div%k;//left over !

            cout<<"len : "<<len<<endl;
            cout<<"ite : "<<div<<endl;
            cout<<"modi : "<<modi<<endl;
            cout<<"last filled : "<<divk<<endl;
            cout<<"left1 : "<<modk<<endl;
            // long long 
            // int A[len];
            vector<int> A(len,0);
            // // 000000(divk)=> k
            for(int l=0;l<len;l++){
                cout<<A[l]<<" ";
            }
            int ck = 0;
            int i=len-1;
            for( ;i>=0 && ck<divk ;i--,ck++){
                A[i]=k;
            }
            A[i]+=modk;
            // i=0;
            // if(modi-1!=0){
            //     long long position = len-(modi -1);
            //     A[position]++;
            // }
            for(int l=0;l<len;l++){
                cout<<A[i]<<" ";
            }
            

            // k
            // kth lexicographically smallest string
            // python 'sa' 'love'
            // if(counta==1){
            //     if(s[0]=='*'){

            //     }
            // }
            // for(int i=n;i>=0;i--){
            //     if()
            // }
            // A[i]*b
            // a**a**a
            // a**a**
            
            string ansi = "";
            int j=0;
            if(first){
                for(int k=0;k<A[0];k++){
                    ansi+='b';
                }
                j++;
                ansi+='a';
            }
            else{
                ansi+='a';
            }
            int endi;
            if(last){
                endi=len-1;
            }
            else{
                endi = len;
            }
            for(;j<endi;j++){
                for(int k=0;k<A[i];k++){
                    ansi+='b';
                }
                ansi+='a';
            }
            if(last){
                for(int k=0;k<A[len-1];k++){
                    ansi+='b';
                }
            }

            cout<<ansi<<endl;
            
        }

    }
	return 0;
}

