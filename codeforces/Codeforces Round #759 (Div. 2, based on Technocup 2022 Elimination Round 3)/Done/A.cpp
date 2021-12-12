
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        int h=1;
        cin>>A[0];
        if(A[0]==1){
            h+=1;
        }
        int prev = A[0];
        bool flag = false;
        for(int i=1;i<n;i++){
            cin>>A[i];
            
            if(prev == 1 && A[i]==1){
                h+=5;
            }
            else if(A[i]==1){
                h+=1;
            }
            else if(A[i]==0 && prev == 0){
                h=-1;
                flag=true;
            }
            prev = A[i];
        }
        if(flag){
            cout<<-1<<endl;
        }
        else{
            cout<<h<<endl;
        }
        
    }
	return 0;
}

