
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long A[n];
        long long sumi = 0;
        long long mini = LONG_MAX;
        for(int i=0;i<n;i++){
            cin>>A[i];
            sumi+=A[i];
            if(A[i]<mini){
                mini=A[i];
            }
        }
        if(sumi <= k){
            cout<<0<<endl;
        }
        else{
            sort(A,A+n);
            reverse(A,A+n);
            long long temps = sumi;
            long long min_c = 0;
            for(int i=0;i<n;i++){
                // cout<<A[i]<<" ";
                if(A[i]==mini){
                    min_c++;
                }
            }
            // cout<<endl;
            long long ans = INT_MAX; 
            
            // sumi A[i] with mini
            long long divi = k/n;// decr to start from !!
            long long rem = k%n;
            if(rem){
                divi++;
            }
            long long decr = 0;
            if(divi<mini){

                    decr = mini - divi;
                    mini-=decr;
                    A[n-1]-=decr;
                    sumi -= decr;
                    
            }


            while(true){
                // we nned to change mini to divi
                
                
                long long count = 0,new_ans; // repla
                
                // while(true){
                //     if(mini*(n)<=k){
                //         break;
                //     }
                //     else{
                //         mini--;

                //     }
                // }
                // if(mini <= k/n){

                // }
                for(int i=0;i<n-1;i++){
                    cout<<sumi<<endl;
                    sumi -= abs(A[i]-mini);
                    // if(abs(A[i]-mini)<1){
                    //     // count++;
                    // }
                    
                    // if(A[i]==mini){
                    //     break;
                    // }
                    
                    if(sumi <= k){
                        count++;
                        break;
                    }
                    count++;
                }
                new_ans = count + decr;
                int flag  = 0;
                if(sumi<=k){
                    if(new_ans>ans){
                        // = ???
                        flag = 1;
                        break;
                    }
                    else{
                        ans=new_ans;
                    }
                }
                if(flag == 1){
                    break;
                }

                    
                decr++;
                A[n-1]--;
                mini--;
                sumi--;
            }
            cout<<ans<<endl;
            // if(sumi>k){
            //     // 20
            //     //k=10
            //     cout<<":"<<(sumi-k)<<endl;
            //     count+=(sumi-k);
            //     // 40 => 10 in 7 steps 
            //     // is it true that 
            //     // if we have 0 decrements !!
            //     // then the ans is just the no. of rep.
            //     // 16 =>
            //     // it's true ????
            //     // if we decrease by 1
            //     // we replace that no. so we actually
            //     // A[i]-mini+1
            //     // 2 var .s
            //     // 1 replacement does no good to that -1
            //     // >1 replacements that decrement  
            //     // decrease min no. by 1 and then replace
            //     // decrease min no. bt 1 and then
            //     // until the decr + repl 
            //     // n*n
            //     // 9 decr and 7 replace

                
            // }
            // cout<<count<<endl;
            // decr first !!!
            // replace it actually lowers more !!!
            // do we need to recompute the sorting 
            // we need to parse the full array after every decr!!!
            // mini by 1
            /// how do we affect the replacements


            // if we decrease some mini to some lower value
            // and then replace 
            // then we will be decreasing sum by
            // rep * (-1 count);
            // 1 1 2 2 3 6 6 8 10
            //                  
        }
    }
	return 0;
}

