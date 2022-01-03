
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector< vector<int> > A(n,vector<int>(n,0));
        // [1 n]
        int num = k-1 + k;
        int count  = 0;
        if(n>=num){
            int j=0;
            for(int i=0;i<n;i+=2,j+=2){
                // for(int j=0;j<n;j+=2){
                    A[i][j]=1;
                    count++;
                    if(count>=k){
                        break;
                    }
                    // break;
                // }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(A[i][j]==1){
                        cout<<"R";
                    }
                    else{
                        cout<<".";
                    }
                }
                cout<<"\n";
            }

        }
        else{
            cout<<-1<<"\n";
        }


    }
	return 0;
}

