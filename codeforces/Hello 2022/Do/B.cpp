
#include <bits/stdc++.h>
using namespace std;
// struct seg {

// }
class seg{
    public:
        int l,r,c;
};
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // vector<seg> A;
        int min_l = INT_MAX;
        int max_r = INT_MIN;
        int max_pos=0,min_pos=0;
        // int left_c = -1,right_c=-1;
        seg A[n];
        long long pre[n+1];
        long long ansa[n];
        for(int i=0;i<n;i++){
            int l,r,c;
            cin>>l>>r>>c;
            A[i].l=l;
            A[i].r=r;
            A[i].c=c;
            if(l<min_l){
                min_l=l;
                min_pos = i;
                if(r>=max_pos){
                    max_pos=i;
                }
                // cout<<"hey";
                // left_c=i;
            }
            if(r>max_r){
                max_r=r;
                max_pos = i;
                if(l<=min_l){
                    min_pos=i;
                }
                // cout<<"horrah";
            }
            // l==min_l r>max_r
            // if(l<min_l && r>max_r){
            //     ma
            // }
            // we are getting mo
            // they were 2 diff segments 
            // but now they merge into 1 !
            
            if(min_pos==max_pos){
                // if(l==min_l && r==max_r){
                //     if(c<A[min_pos].c){
                //         min_pos=i;
                //         max_pos=i;
                //     }
                // }
                if(l==min_l){
                    if(r==max_r){
                        if(c<A[min_pos].c){
                            min_pos=i;
                            max_pos=i;
                        }
                    }
                    // if(c<A[min_pos].c){
                    //     min_pos=i;
                    // }
                }
                // if we find 2 segments
                // that have total cost to be less than a single segment 
                // range is same ?
                // what if max_pos and min_pos are same ?
                if(r==max_r){
                    if(l==min_l){
                        if(c<A[min_pos].c){
                            min_pos=i;
                            max_pos=i;
                        }
                    }
                    // if(c<A[max_pos].c){
                    //     max_pos=i;
                    // }
                }
                // same range !!
                // 1=>1
                // 1=>2 ???
                // like 1-5 5-10
                // 

            }
            else{
                // 2 => 1
                // 2 => 2 ?
                if(l==min_l){
                    if(r==max_r){
                        if(c<A[min_pos].c+A[max_pos].c){
                            min_pos=i;
                            max_pos=i;
                        }
                    }
                    // else if(r>)
                    if(c<A[min_pos].c){
                        min_pos=i;
                    }
                }
                // what if max_pos and min_pos are same ?
                if(r==max_r){
                    if(l==min_l){
                        if(c<A[min_pos].c+A[max_pos].c){
                            min_pos=i;
                            max_pos=i;
                        }
                    }
                    if(c<A[max_pos].c){
                        max_pos=i;
                    }
                }
                // if(l==min_l && r==max_r)
            }
            
                // if(l==min_l){
                //     if(c<A[min_pos].c){
                //         min_pos=i;
                //     }
                // }
                // // what if max_pos and min_pos are same ?
                // if(r==max_r){
                //     if(c<A[max_pos].c){
                //         max_pos=i;
                //     }
                // }
            
            // you don't buy if you can't increase the integers
            // greedy ? - take what you don't have ?
            // sort => take the extremes
            long long ans = 0;
            if(max_pos==min_pos){
                ans=A[max_pos].c;
            }
            else{
                ans = A[max_pos].c+A[min_pos].c;
            }
            ansa[i]=ans;

            // cin>>A[i].l>>A[i].r>>A[i].c;
        }
        // pre[0]=ansa[0];
        for(int i=0;i<n;i++){
            cout<<ansa[i]<<endl;
            // pre[i]=pre[i-1]
            // long long ans = 0;
            // if(max_pos==min_pos){
            //     ans=A[max_pos].c;
            // }
            // else{
            //     ans = A[max_pos].c+A[min_pos].c;
            // }
            // cout<<ans<<"\n";
        }
        // int ans = A[max_pos].c+A[min_pos].c;
    }
	return 0;
}

