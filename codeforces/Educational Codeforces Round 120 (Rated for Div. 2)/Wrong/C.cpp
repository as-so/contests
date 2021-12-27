
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
            for(int i=0;i<n;i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;

            int count = 0;
            // sumi A[i] with mini
            for(int i=0;i<n;i++){
                cout<<sumi<<endl;
                sumi -= abs(A[i]-mini);
                // if(abs(A[i]-mini)<1){
                //     // count++;
                // }
                
                if(A[i]==mini){
                    break;
                }
                if(sumi <= k){
                    count++;
                    break;
                }
                count++;
            }
            if(sumi>k){
                count+=(sumi-k);
            }
            cout<<count<<endl;

            // 1 1 2 2 3 6 6 8 10
            //                  
        }
    }
	return 0;
}

