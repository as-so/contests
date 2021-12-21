
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    // n friends jth
    // m shops. ith
    // pij joy
    // n-1 shops
    // alpha = min joy out of all friends aj
    // max.
    // binary search
    // which shop should vlad skip ???
    //


    int t;
    cin>>t;
    while(t--){
        // string s;
        // cin>>s;
        int m,n;
        cin>>m>>n;
        int A[m][n];
        int alpha = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>A[i][j];
                // cout<<A[i][j]<<" ";
            }
            // cout<<endl;
        }
        int mini[n];
        int maxi[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mini[i]=min(A)
            }
        }

    }
	return 0;
}

