#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // pi -> i
        int mat[n+1][n+1];
        map<int,int> mp;

        for(inr i=0;i<n;i++){
            int p;
            cin>>p;
            mat[p][i+2]=1;
            mp[p]++;
        }
        // vector<int> v(n+1,0);
        // int v[n+1];
        vector<pair<int,int>> v;


        for(auto it:mp){
            v.push_back({it.second,it.first});
            // v[it.first]=it.second;
        }
        // 1 indexed 
        sort(v.begin(),v.end()); // idk
        // sort(v+1,v+n+1);
        // reverse(v+1,v+n+1);
        reverse(v.begin(),v.end());


        int levels = v.size();
        int k =0;
        int ans = levels;

        for(auto it:v){
            if(it.first<=levels-k){
                // we will be done while we fill other levels
                it.first-=min(levels-k,it.first);

            }
            else{
                // we might need to come back here !
                //-2
                // level
                //
                int left = it.first-(levels-k);
                ans+=left/2;
                //. 7
                //  5

                // in each level 
                // 7 5 4 2
                // j-(l-k0).   p-(l-k1)
                // j>=p
                // 
                // 4 4 4 1
                // 2 3 3 0 
                // 1 1 3


            }
        }
        v[0].first;// we will definitely be done but we can do better.
        int dec = 1;
        int idx = 0;
        while(true){
            v[idx]-=1;
            if(v[idx]-dec < v[idx]-dec){

            }// injection
            ans++;
        }
        for(auto it:v){

        }
        // 4 




        // it's best to choose the vertex with a lot of cousins / neigh
        // most children ! => 1 children inject
        
        // 1-> 4.         infect    
        // 2-> 3.         infect
        // 1
        // |
        // 4
        // |
        // 5.     => 2nd (levels-1)>
        // /\
        // 2 3.     => 4 
        //3

        //.  level => 2 infected ppl + 1 +. inj 
        int ans = levels + ;
    }
}
