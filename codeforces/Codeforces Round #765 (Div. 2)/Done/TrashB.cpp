#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int maxi = INT_MIN;
		int mini = INT_MIN;
        
        int mid = (n+1)/2;
        // if(n%2==0){

        // }
		
		vector<int> v(n,0);
		// set<int> s;
        vector<int> dp(150000,0);// count
        vector<pair<int,int> > pos;
        vector<int> pos_ans;
        
        bool flag = false;
        vector<int> ll(150000,0);// count
        vector<int> rl(150000,0);// count
        // int ll[150000] = 0, rl[150000] = 0;
		for(int i=0;i<n;i++){
			cin >> v[i];
            dp[v[i]]++;
            ll[v[i]]=i;
            rl[v[i]]=n-i-1;
            // + 1 ans
            // prev ll can be replaced
            // by the new guy bcoz
            // if we get 3 1s
            // we will have to choose the closest 2 ones
            // is this approach correct ??
            // 1 1

            if(dp[v[i]]==2){
                flag = true;

            } 
            if(dp[v[i]]>=2){
                if(i<mid){
                    ll = max(ll,i);
                }
                else{
                    rl = max(rl,n-i);
                }
            }
            // s.insert(v[i]);
			// maxi = max(maxi,v[i]);
			// mini = min(mini,v[i]);
		}
        // if there are multiple duplicate elements ?
        // then which one should we pick ????

        // 1 can occur thrice !!!
        if(n%2==0){

        }
        for(int l=(n+1)/2;l>=0;l--){

        }

        if(flag == false){
            cout<<-1<<endl;
        }	
        else{

        }
		
	}
}
