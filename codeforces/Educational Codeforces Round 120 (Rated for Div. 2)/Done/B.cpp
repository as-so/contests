
#include <bits/stdc++.h>
using namespace std;
bool compare(pair< pair<int,int>,int> pii1,pair< pair<int,int>,int> pii2){
    if(pii1.first.first > pii2.first.first){
        return true;
    }
    else if(pii1.first.first == pii2.first.first){
        // both are 0 or 1
        if(pii1.first.second >= pii2.first.second)
        {   // prev rating
            // if pii1 has more prev rating
            // it should be rated high !!!
            // cout<<"hehe";

            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
    // desc orrder
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        string s;
        cin>>s;
        // 1 based indexing
        // 0 based
        int sl = s.length();
        vector<int> ans(n,0);
        int pt1 = 0;
        int pt2 = n-1;
        for(int i=0;i<sl;i++){
            if(s[i]=='0'){
                ans[pt1]=i+1;
                pt1++;
            }
            else if(s[i]=='1'){
                ans[pt2]=i+1;
                pt2--;
            }
        }
        // diff b/w prev rating and new rating 
        // should be min.
        // sort the array based on 0 or 1
        // and when they are same then criteria is present rating

        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        // make a struct !!!!
        vector< pair< pair<int,int>,int> > pv;
        for(int i=0;i<n;i++){
            int temp=1;
            if(s[i]=='0'){
                temp = 0;
            }
            pv.push_back({{temp,p[i]},i+1});
        }
        sort(pv.begin(),pv.end(),compare);
        // for(int i=0;i<n;i++){
        //     cout<<pv[i].second<<":";
        // }
        // cout<<endl;
        vector<int> pos(n,0);

        for(int i=0;i<n;i++){
            pos[pv[i].second-1]=n-i;
        }
        int mini = 0;
        // for(int i=0;i<n;i++){
        //     cout<<p[i]<<":";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++){
            mini += abs(pos[i]-p[i]);
            // cout<<p[i]<<":"
            cout<<pos[i]<<" ";
        }
        // cout<<mini;
        cout<<endl;
    }
	return 0;
}

