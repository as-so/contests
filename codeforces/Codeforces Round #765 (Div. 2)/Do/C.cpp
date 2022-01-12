#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int main() {
	// int t;
	// cin >> t;
	// while(t--) {
		int n,l,k;
		cin >> n >> l >> k ;
		// int maxi = INT_MIN;
		// int mini = INT_MAX;
		
		vector<int> d(n,0);
		vector<int> a(n,0);
		for(int i=0;i<n;i++){
			cin >> d[i]; 
			// maxi = max(maxi,v[i]);
			// mini = min(mini,v[i]);
		}
        vector<int> p(n,0);
        vector<int> red(n,0);
        for(int i=0;i<n;i++){
			cin >> a[i]; 
            p[i]=a[i];
			// maxi = max(maxi,v[i]);
			// mini = min(mini,v[i]);
		}
        sort(all(p));
        int tpk = a[0];
        int time_ = 0;
        int max_red = 0;
        int pos_red = 0;
        vector< pair<int,int> > redi;
        for(int i=1;i<n;i++){
            int val =  tpk*(d[i]-d[i-1]);
            if(i==n-1){
                red[i]=(a[i]-a[i-1])*(l-d[i]);
            }
            else{
                red[i]=(a[i]-a[i-1])*(d[i]-d[i-1]);

            }
            redi.push_back({red[i],i});

            if(red[i]>max_red){
                max_red=red[i];
                pos_red=i;
            }
            // cout<<val<<endl;
            time_+=val;
            tpk=a[i];
        }
        time_ += tpk*(l-d[n-1]);
        cout<<time_<<endl;

        sort(all(redi));
        reverse(all(redi));

        int ite = 0;
            max_red = redi[ite].first;
            pos_red = redi[ite].second;
        int new_r = 0; 
        while(k){
            // time_-=redi[ite].first;
            time_-=max_red;

            
            // int pos_red = redi[ite].second;
            // red[pos_red]=0;
            if(pos_red>1){

                int new_redi=(a[pos_red]-a[pos_red-1])*(d[pos_red+1]-d[pos_red-1]);
                
                // sort the reductions 
                // reductions changes for 1 element !!!
                // maxred max()
                // efficient way to do that in my code 
                // O(n)
                if(redi[ite+1].first<new_redi){
                    max_red = new_redi;
                    pos_red--;
                    for(int i=0;i<n;i++){
                        if(redi[i].second==pos_red-1){
                            redi[i].first=0;
                        }
                    }
                }
                else{
                    new_r = max(new_redi,new_r);
                    max_red = redi[ite+1].first;
                    pos_red =redi[ite+1].second;
                }
                // pos_red--;
            }
            else{
                
                    max_red = redi[ite+1].first;
                    pos_red =redi[ite+1].second;
                
            }
            k--;
            ite++;
        }
        cout<<time_<<endl;
        // assuming that at each step 
        // largest reducer 
        // optimal
        // sort(all(red));

        // 0 2 3 4 8
        // 5 6 6 3 6





        // wa

        // if we remove a sign 
        // speed will be same as prev
        // we cannot remove a sign where 
        // prev>= curr_sign 
        // prev < curr_sign

        // greedily remove the signa that have the hoighest values 
        // spend more time per km !!
        // 100 1 km => 100 min for 1km
        // 50  3km => 150 min 

        // 0 5 100 101
        // 2 5 10
        // removing 10 would reduce time by
        // (10-5)*1
        // (5-2)*(100-5) >>>>

				
		
	// }
}
