#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long s;
        // a*1 + b*2 + 1
        // 1 1 1 1 1. 1 1 1 1 2 2 22 2 2 2. 2 2. 2 => 1 
        // 2 2 2 2 2 2 2 2. 22  => 
        // a,b 0--> ai , bi
        // 1=>a 2=>b
        // for(int i=1;i<a+b+1;i++){
        //     if()
        // }
        // 1 1burle 2 2 burle
        // 1 3
        // 1 2 3 4 5 6 7

        // 2 2 2 2 2 1 

        // => 2  
        // 1 2 3 => 4 
        if(a==0){
            cout<<1<<endl;
        }
        else{
        cout<<a*1 + b*2 + 1 <<endl;
        }
    }
}
