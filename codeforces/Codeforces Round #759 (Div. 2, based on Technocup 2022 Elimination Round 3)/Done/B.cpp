
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n];
		int larg=INT_MIN;
		for(int i=0;i<n;i++){
			cin>>A[i];
			if(A[i]>larg){
				larg=A[i];
			}
		}
		int ans = 0;
		int k = A[n-1];
		if(k==larg){
			cout<<0<<endl;
		}
		else{
			
			ans++;

			for(int i=n-1;i>=0;i--){
				if(A[i]==larg ){
					break;
				}
				if(A[i]>k && A[i]<larg){
					ans++;
					k=A[i];
				}

			}
			cout<<ans<<endl;
		}
		
		// when largest element comes at last it stops


	}
	return 0;
}

