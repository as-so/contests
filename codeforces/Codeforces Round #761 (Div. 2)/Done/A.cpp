
#include <bits/stdc++.h>
using namespace std;

// // Comparator function to sort the
// // array of string wrt given conditions
// bool my_compare(string a, string b)
// {
// 	// Check if a string is present as
// 	// prefix in another string, then
// 	// compare the size of the string
// 	// and return the larger size
// 	if (a.compare(0, b.size(), b) == 0
// 		|| b.compare(0, a.size(), a) == 0)

// 		return a.size() > b.size();

// 	// Else return lexicographically
// 	// smallest string
// 	else
// 		return a < b;
// }



int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        //t = abc => order should be diff.
        // a b c
        // a c b
        //
        // no c
        // a b 
        // int n;
        // cin>>n;
        string s,t,s_;
        cin>>s>>t;
        string ans="";
        sort(s.begin(),s.end());

        int cnta=0,cntb=0,cntc=0,cnt=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='a'){
                    cnta++;
                }
                else if(s[i]=='b'){
                    cntb++;
                }
                else if(s[i]=='c'){
                    cntc++;
                }
                else{
                    cnt++;
                }
            }   

        if(t=="abc" && cnta>0){
             
            
            for(int i=0;i<cnta;i++){
                ans+='a';
            }
            for(int i=0;i<cntc;i++){
                ans+='c';
            }
            for(int i=0;i<cntb;i++){
                 ans+='b';
            }
            // for(int i=0;i<cnt;i++){
            //     ans+=
            // }
            ans+=s.substr(cnta+cntb+cntc,cnt);
        }
        else{
            ans=s;
        }
        cout<<ans<<endl;
        // int A[n];
        // for(int i=0;i<n;i++){
        //     cin>>A[i];
        // }

    }
	return 0;
}
// Function to print the vector
// void Print(vector<string> v)
// {
// 	for (auto i : v)
// 		cout << i << endl;
// }


// // Driver Code
// int main()
// {
// 	// GIven vector of strings
// 	vector<string> v = { "batman", "bat", "apple" };

// 	// Calling Sort STL with my_compare
// 	// function passed as third parameter
// 	sort(v.begin(), v.end(), my_compare);

// 	// Function call to print the vector
// 	Print(v);
// 	return 0;
// }

