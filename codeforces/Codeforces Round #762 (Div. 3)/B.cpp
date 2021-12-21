
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    //10^3
    const unsigned long long N = 31623;
    // vector<int> sq_cb;
    set<unsigned long long int> se;
    vector<unsigned long long int> a;


    for(unsigned long long i=1;i<N;i++){
        // sq_cb.push_back(i*i);
        // sq_cb.push_back(i*i*i);
        se.insert(i*i);
        se.insert(i*i*i);
    }
    // sort(sq_cb.begin(),sq_cb.end());
    // vector< pair<int,int> > pre;
    // int count = 0;
    // for(int i=0;i<sq_cb.size();i++){
    //     pre.push_back({sq_cb[i],count});
    //     count++;
    // }

    // for(int i=0;i<N;i++){
    //     pre.push_back()    
    // }
    for(auto x:se){
        a.push_back(x);
    }
    // set<unsigned long long>::iterator itr;
    // for (itr = se.begin(); itr != se.end(); itr++) {
    //     a.push_back( *itr); 
    // }

    // for (unsigned int i = 0; i < a.size(); i++)
    //     std::cout << " " << a[i];
    // std::cout << "\n";

    while(t--){
        int n;
        cin>>n;
        auto it = lower_bound(a.begin(),a.end(),n);
        // 1 0 +1
        // 4 1 +1
        if(*it==n){
            // cout<<*it<<" ";
            cout<<(it-a.begin()+1)<<endl;
        }
        else{
            // cout<<*it<<" ";
            cout<<(it-a.begin())<<endl;
        }
        
    }
	return 0;
}

