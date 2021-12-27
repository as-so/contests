
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long l1,l2,l3;
        cin>>l1>>l2>>l3;
        bool is_e1=false,is_e2=false,is_e3=false;
        long long large = max(l1,l2);
        large= max(large,l3);
        if(l1%2==0){
            is_e1=true;
        }
        if(l2%2==0){
            is_e2=true;
        }
        if(l3%2==0){
            is_e3=true;
        }
        bool flag = false;
        if(l1==l2){
            if(is_e3){
                flag = true;
            }
        }
        else if(l2==l3){
            if(is_e1){
                flag = true;
            }
        }
        else if(l1==l3){
            if(is_e2){
                flag = true;
            }
        }
        else{
            if(large!=l1){
                if(large!=l2){
                    if(large - l1 == l2){
                        flag = true;
                    } 
                }
                else{
                    if(large - l3 == l1){
                        flag = true;
                    }
                }
                
            }
            else {
                // l1 is large
                if(large - l2 == l3){
                    flag = true;
                }
            }
            // if(large!=l2)
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
	return 0;
}

