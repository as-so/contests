
#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		// int maxi = INT_MIN;
		// int mini = INT_MIN;
		
		vector<int> v(n,0);
        // vector<int> pos[150000];
        vector< vector<int> > pos(150000);



		
		for(int i=0;i<n;i++){
			cin >> v[i]; 
            pos[v[i]].push_back(i);
			// maxi = max(maxi,v[i]);
			// mini = min(mini,v[i]);
		}
        int gans = 0;
        bool flag = false;
        for(int i=0;i<150000;i++){
            int ni = pos[i].size();
            if(ni>=2){
                int ans = 0;
                flag = true;
                // find largest length
                for(int j=0;j<ni-1;j++){
                    // cout<<pos[i][j]<<" "<<pos[i][j+1]<<endl;
                    int pos1 = pos[i][j];
                    int pos2 = n-pos[i][j+1]-1;
                    // cout<<n<<pos2<<endl;
                    int ansi = pos1+pos2+1;
                    ans = max(ans,ansi);
                }
                gans = max(ans,gans);
            }
        }
        if(flag){
            cout<<gans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
				
		
	}
}
