
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int A[n];
        int lefti = 0,righti=0;
        int nr=0,nl=0;
        // int neg[n];
        vector<int> neg;
        vector<int> pos;
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]>0){
                nr++;
                pos.push_back(A[i]);
            }
            else if(A[i]<0){
                nl++;
                neg.push_back(A[i]);
            }

            if(A[i]<lefti){
                lefti=A[i];
            }
            if(A[i]>righti){
                righti=A[i];
            }
        }
        // sort(A,A+n);
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        reverse(neg.begin(),neg.end());
        for(int i=0;i<neg.size();i++){
            neg[i]=abs(neg[i]);
        }
        int end = abs(lefti)>righti?lefti:righti;
        // carrying 1 bag => end at extremes
        // 2 bag => 
        long long ans = 0;
        if(end == lefti){
            int NL = nl,NR=nr;

            int ite = 1;
            // nl >0 but <k
            while(nr>k){
                if(ite*k>NR-k){
                    ans+=2*pos[NR-k-1];
                    nr-=(ite*k-(NR-k)+1);
                    break;
                }
                else{
                    ans+=2*pos[ite*k-1];
                    nr-=k;
                }
                
                // ite*k-1 will not work !!!

                
                ite++;
                // cout<<"ans:"<<ans<<" ";
            }
            if(nr>0){
                ans+=2*pos[pos.size()-1];
                // cout<<"ans:"<<ans<<" ";
            }
            //rhs is done !!
            if(nl<=k){
                ans+=abs(lefti);
                cout<<ans<<"\n";
            }
            else{
                // int iter= 1;
                //     while(nl>k){
                //         ans+=2*neg[iter*k-1];
                //         nl -= k;
                //         iter++;
                //     }
                //     if(nr>0){
                //         // ans+=lefti;
                //         ans+=neg[neg.size()-1];
                //     }
                //     cout<<ans<<"\n";
                int iter= 1;
                    //
                    while(nl>k){
                        if(iter*k > NL-k){
                            ans+=2*neg[NL-k-1];
                            nl-=(iter*k-(NL-k)+1);// right?
                            break;
                        }
                        else{
                            ans+=2*neg[iter*k-1];
                            nl -= k;
                        }
                        
                        iter++;
                        // cout<<"ans:"<<ans<<" ";
                    }
                    if(nl>0){
                        ans+=neg[neg.size()-1];
                    }
            }
        }
        else if(end == righti){
            // cout<<"ye ";
            int NR=nr,NL=nl;
            int ite = 1;
            // nl >0 but <k
            while(nl>k){
                if(ite*k>NL-k){
                    ans+=2*neg[NL-k-1];
                    nl-=(ite*k-(NL-k)+1);
                    break;
                }
                else{
                //     ans+=2*pos[ite*k-1];
                //     nr-=k;
                // }
                    ans+=2*neg[ite*k-1];
                // ite*k-1 will not work !!!
                    nl-=k;
                }
                ite++;
                // cout<<"ans:"<<ans<<" ";
            }
            if(nl>0){
                ans+=2*neg[neg.size()-1];
                // cout<<"ans:"<<ans<<" ";
            }
            if(nr<=k){
                ans+=righti;
                cout<<ans<<"\n";
                // cout<<"ans:"<<ans<<" ";

            }
            else{
                // nr 5 3 
                // (nr-k)
                //ans+=righti;
                // remove last k elements
                // remove first nr-k elements
                // while(true){
                //     if(nr-k)
                // }
                // int NR = nr;
                int iter= 1;
                    //
                    while(nr>k){
                        // cout<<"ans:"<<ans<<" ";
                        if(iter*k > NR-k){
                            // cout<<"k:"<<k<<" ";
                            // cout<<"nr:"<<nr<<" ";
                            // cout<<"ans:"<<ans<<" ";
                            // ans+=2*pos[nr-k-1];
                            ans+=2*pos[NR-k-1];
                            nr-=(iter*k-(NR-k)+1);// right?
                            // cout<<"ansb:"<<ans<<" ";
                            break;
                        }
                        else{
                            // cout<<"fine";
                            ans+=2*pos[iter*k-1];
                            nr -= k;
                        }
                        
                        iter++;
                        // cout<<"ans:"<<ans<<" ";
                    }
                    if(nr>0){
                        ans+=pos[pos.size()-1];
                    }
                    cout<<ans<<"\n";
            }
        }
        // for(int i=0;i<n;i++){

        // }
    }
	return 0;
}

