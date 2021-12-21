
#include <bits/stdc++.h>
using namespace std;

// const long long N = 1e6;
// int Arr[N];

int main() {
	// your code goes here
    int t;
    cin>>t;

    // for(int i=0;i<N;i++){
    //     Arr[i]=
    //     // for every i what is the max value it can give us
    //     // when modded !

    // }



    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
            // x => a-1
            

        }
        sort(A,A+n);
        // 4 % 1,2 =0  3=1 
        // 0 <-> n-1
        // 1 odd no.s % 2
        // 2 5%3=2 => x+2 => m*x + 2 %x %m =>2
        // n => 3 mod n-3 if(n-3<n/2)
        // 4 =>       1,0
        // 5 =>     1,2,1,
        // 6 =>   1,2,0,0,
        // 7 => 1,2,3,1,1,
        // 8 =1,2,3,0,2,0,
        //9 1,2,3,4,1,0,1
        // n can produce any number < n/2 !
        //9=>3 
        // ASSUMING THAT LARGE no.s give us large numbers as mod 
        // but we know that sometimes some number cannot give a certain. number if it has a factor of that in it 
        // 9 => 2  5=>3
        // n % (n/2) 0
        // 9 %(n/2)+1 => 4
        // int flag = 1;
        int count = 0;
        int k = 0;
        // end = n
        // end -1 = n-1
        // 9 
        // if z can produce x cannot y
        // if w can produce y cannot x
        // set<int> s;
        // // for(int i=0;i<n;i++)
        // for(int i=n-1;i>=0;i--){
        //     if(A[i]==n-k){
        //         k++;
        //         continue;
        //     }
        //     if(A[i]%(A[i]-(n-k))!=n-k){
        //         // take a number who can produce n-k
        //         // use this number to produce some other digit !
        //         // use this number to produce a digit who other numbers can't produce
        //         // cout<<"can't do at "<<i<<" "<<A[i]<<" "<<n-k<<endl;
        //         flag = -1;
        //         break;
        //     }
        //     else{
        //         count++;
        //         k++;
        //     }
        // }
        // if(flag==1){
        //     cout<<count<<endl;
        // }
        // else{
        //     cout<<-1<<endl;
        // }
        set<int> s;

        for(int i=1;i<=n;i++){s.insert(i);}


        bool flag =true;
        int m=1;
        int h=INT_MAX;

        for(int i=0;i<n;i++){
            
            // if(A[i]==i+1){
            //     continue;
            // }
            if(A[i]>=1 && A[i]<=n && s.find(A[i])!=s.end()){
                // if(A[i]==m){
                    // && s.find(A[i])==s.end()
                // }
                // s.insert(A[i]);
                s.erase(A[i]);
                
                continue;
            }
            else{
                int maxi = ((A[i]-1)/2);
                // A[i]/2

                auto mer= s.begin();
                m= *mer;
                // cout<<"m :"<<m<<endl;
                if(m <=maxi){
                    // flag=false;
                    // break;
                    s.erase(m);
                    count++;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}

