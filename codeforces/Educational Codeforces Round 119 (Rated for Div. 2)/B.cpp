
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
	// your code goes here
    // 2 pt.s 
    //
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int k1,k2,k3,k4;
        cin>>k1;
        int x1[k1];
        // x2[k2];
        for(int i=0;i<k1;i++){
            cin>>x1[i];
        }
        
        cin>>k2;
        int x2[k2];
        // x2[k2];
        for(int i=0;i<k2;i++){
            cin>>x2[i];
        }
        cin>>k3;
        int y1[k3];
        // x2[k2];
        for(int i=0;i<k3;i++){
            cin>>y1[i];
        }
        cin>>k4;
        int y2[k4];
        for(int i=0;i<k4;i++){
            cin>>y2[i];
        }
        sort(x1,x1+k1);
        sort(x2,x2+k2);
        sort(y1,y1+k3);
        sort(y2,y2+k4);
        int l1=x1[k1-1]-x1[0];
        int l2=x2[k2-1]-x2[0];
        int l3=y1[k3-1]-y1[0];
        int l4=y2[k4-1]-y2[0];
        //---------2
        // |
        // |3
        // ------- 1


        // int max=l2;
        // int pos = 2;
        // if(l1>max){
        //     max=l1;
        //     pos=1;
        // }
        
        // if(l3>max){
        //     max=l3;
        //     pos=3;
        // }
        // if(l4>max){
        //     max=l4;
        //     pos=3;
        // }

        // if(max==l3 || max==l4){
            
        // }
        // 3 / 4 == 1 / 2 && h>w
        // l1 , l2 ,l3 , l4 
        int ans1 = max(l3,l4);
        int ans2 = max(l1,l2);
        ans1*=w;
        ans2*=h;

        // if(pos==3 || pos==4){
            
        // }
        // else {
        //     ans2*=h;
        // }

        cout<<max(ans1,ans2)<<endl;
        // cout<<k1<<"end"<<endl;
        // --------
        // 8,x. 0,s 2 larger sides
        // still their difference is smaller than 
        // other 2 points on the other side 


    }
	return 0;
}

