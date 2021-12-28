#include <bits/stdc++.h>
// #define long long long long
using namespace std;

int main() {

    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long A[n];
        long long maxi = LONG_MIN;
        long long mxi = 0;
        long long mini = LONG_MAX;
        long long mni = 0;
        for(long long i=0;i<n;i++){
            cin>>A[i];
            if(A[i]>maxi){
                maxi = A[i];
                mxi = i;
            }
        }
        for(int i=0;i<n;i++){
            if(A[i]<mini && mxi!=i){
                mini = A[i];
                mni = i;
            }
        }
        // how to ensure mni != mxi ??
        long long exp = LONG_MIN;

        for(long long i=0;i<n;i++){
            if(i!=mxi && i!=mni)
            {    
                exp = max(exp,(maxi-mini)*A[i]);
                exp = max(exp,(A[i]-mini)*maxi);
            }
        }
        cout<<exp<<endl;
    }
}
