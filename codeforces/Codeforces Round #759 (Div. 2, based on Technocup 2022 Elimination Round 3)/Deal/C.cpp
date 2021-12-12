
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here

// 	return 0;
    // 2 2 2
    // 2 3
    // 1 2
    // 1 3
    // 2 1
    // 2 3
    // 1 1 1
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int A[n];
        int lefti = 0,righti=0;

        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]<lefti){
                lefti=A[i];
            }
            if(A[i]>righti){
                righti=A[i];
            }
        }
    }
}

// deal
if(end == lefti){
            // go right fulfill k depots
            if(nr<k){
                ans+=righti;
                if(nl<k){
                    ans+=lefti;
                    //ans;

                }
                else{
                    //go till closest k
                    /*
                    for(int i=0;i<neg.size();i++){
                        
                    }
                    */
                    //kth element add
                    int ite = 1;
                    while(nl>k){
                        ans+=2*neg[ite*k-1];
                        nl -= k;
                        ite++;
                    }
                    if(nl>0){
                        ans+=neg[neg.size()-1];
                    }
                    //ans
                }
                // else if(nl>=k){

                // }
            }
            else{
                    int ite = 1;
                    while(nr>0){
                        ans+=2*pos[ite*k-1];
                        nr -= k;
                        ite++;
                    }
                    // if(nl>0){
                    //     ans+=pos[pos.size()-1];
                    // }

                if(nl<k){
                    ans+=lefti;
                    // if nl==0 lefti=0
                    // & everything will just work
                    //ans;

                }
                else{
                    //go till closest k
                    /*
                    for(int i=0;i<neg.size();i++){
                        
                    }
                    */
                    //kth element add
                    int ite = 1;
                    while(nl>k){
                        ans+=2*neg[ite*k-1];
                        nl -= k;
                        ite++;
                    }
                    if(nl>0){
                        ans+=neg[neg.size()-1];
                    }
                    //ans
                }

            }
        }
