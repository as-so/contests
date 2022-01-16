
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // we just have to find a central loc
        // where rahul can sit !!!
        int max_dis = n-1 + m - 1;
        int k = max(n,m);
        int mini = min(n,m);
        vector<int> ans(n*m-1+1,0);
        int size = n*m - 1;

        int ct = 0;
        int i=size;
        for(; i>=0 && ct<4;i--){
            ct++;
            ans[i]=max_dis;
        }
        bool odd_flag = false;
        if(mini%2==1){
            odd_flag=true;
        }
        // i++;
        // 2 strips
        int s1n = n;
        int s1m = m;
        int s2n = n;
        int s2m = m;

        s2n-=2;
        s1m-=2;

        // n-=2;
        // m-=2;
        max_dis--;

        // if(n==mini){
        //     if
        // }
        // 4*3
        // 2*3 
        // 4*1

        // while( (s1n>0 || s1m>0 )&& (s2m>0 && s2n>0)){
            // if(n>m){
        while(n>0 || m>0){
                // if(n>=2 && m>=2){
                //     n-=2;
                //     m-=2;
                //     int ct = 0;
                //     for(; i>=0 && ct<4;i--){
                //         ct++;
                //         ans[i]=max_dis;
                //     }
                //     // i++;
                // }
                // else if(n>=2 && odd_flag) {
                //     int ct = 0;
                //     for(; i>=0 && ct<n;i--){
                //         ct++;
                //         ans[i]=max_dis;
                //     }
                //     n=0;
                //     // i++;
                // }
                // else if(m>=2 && odd_flag){
                //     int ct = 0;
                //     for(; i>=0 && ct<m;i--){
                //         ct++;
                //         ans[i]=max_dis;
                //     }
                //     m=0;
                //     // i++;
                // }
                // if(n>=2){
                //     n-=2;
                //     // m-=2;
                //     int ct = 0;
                //     for(; i>=0 && ct<4;i--){
                //         ct++;
                //         ans[i]=max_dis;
                //     }
                //     i++;
                // }
                
                // else if(n==1){
                //     n-=1;
                //     int ct = 0;
                //     for(; i>=0 && ct<2;i--){
                //         ct++;
                //         ans[i]=max_dis;
                //     }
                //     i++;
                // }
                // if(m>=2){
                //     m-=2;
                //     int ct = 0;
                //     for(; i>=0 && ct<4;i--){
                //         ct++;
                //         ans[i]=max_dis;
                //     }
                //     i++;
                // }
                // else if(m==1){
                //     m-=1;
                //     int ct = 0;
                //     for(; i>=0 && ct<2;i--){
                //         ct++;
                //         ans[i]=max_dis;
                //     }
                //     i++;
                // }
                // if(s2m>s1m){
                //     if(m>=2){
                //         m-=2;
                //         int ct = 0;
                //         for(; i>=0 && ct<4;i--){
                //             ct++;
                //             ans[i]=max_dis;
                //         }
                //         i++;
                //     }
                //     else if(m==1){
                //         m-=1;
                //         int ct = 0;
                //         for(; i>=0 && ct<2;i--){
                //             ct++;
                //             ans[i]=max_dis;
                //         }
                //         i++;
                //     }
                // }
                // if(s2m>=2 && s1m>=2){

                // }
                if(s1m>=2 && s1m>=2){
                    // n-=2;
                    // m-=2;
                    s1m-=2
                    s2m-=2
                    // 8 !!!!
                    int ct = 0;
                    for(; i>=0 && ct<8;i--){
                        ct++;
                        ans[i]=max_dis;
                    }
                    // i++;
                }
                if(n>=2 && m>=2){
                    n-=2;
                    m-=2;
                    int ct = 0;
                    for(; i>=0 && ct<8;i--){
                        ct++;
                        ans[i]=max_dis;
                    }
                    i++;
                }
                


                else if(n>=2 && odd_flag) {
                    int ct = 0;
                    for(; i>=0 && ct<6;i--){
                        ct++;
                        ans[i]=max_dis;
                    }
                    n-=6;
                    i++;
                }
                else if(m>=2 && odd_flag){
                    int ct = 0;
                    for(; i>=0 && ct<6;i--){
                        ct++;
                        ans[i]=max_dis;
                    }
                    m-=6;
                    i++;
                }
                
            // }
            if(i<=0){
                break;
            }
            max_dis--;
        }
        // max_dis--;
        // i++;

        // int rows_rem = n;
        // int col_rem = m;
        // rows_rem-=2;
        // col_rem-=2;

        // if(k==n){

        //     int ct = 0;
        //     for(; i>=0 && ct<4;i++){
        //         ct++;
        //         ans[i]=max_dis;
        //     }
        // }
        // cout<<max_dis<<endl;
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;

    }
	return 0;
}

