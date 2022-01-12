
#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
// #define int long long
using namespace std;
int binToDecimal(string s)
{
    // int num = n;

    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    // int temp = num;
    // while (temp) {
    //     int last_digit = temp % 10;
    //     temp = temp / 10;

    //     dec_value += last_digit * base;

    //     base = base * 2;
    // }
	int n = s.length();
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1')
		{
			dec_value+=base;
		}	
			
		base*=2;
	}

    return dec_value;
}
string decToBinary(int n)
{
    // array to store binary number
    // int binaryNum[32];
	// vector<int> ans;
	string ans="000000000000000000000000000000";

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        // binaryNum[i] = n % 2;
		// ans+=to_string(n%2);
		if(n%2==1){
			ans[i]='1';
		}
		// ans[i]=to_string(n%2);
        n = n / 2;
        i++;
    }
	reverse(all(ans));
    // printing binary array in reverse order
    // for (int j = i - 1; j >= 0; j--)
    //     cout << binaryNum[j];
	return ans;
}
int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int n,l;
		cin >> n >>l;
		int maxi = INT_MIN;
		int mini = INT_MIN;
		// int avg = 0;
		vector<int> v(n,0);
		vector<string> vs;

		
		for(int i=0;i<n;i++){
			cin >> v[i]; 
			// avg+=v[i];
			// maxi = max(maxi,v[i]);
			// mini = min(mini,v[i]);
			vs.push_back(decToBinary(v[i]));
		}
		string ansi = "";
		for(int j=0;j<30;j++){
			int cnt0 = 0;
			for(int i=0;i<n;i++){
				// for(int j=0)
				if(vs[i][j]=='0'){
					cnt0++;
				}

			}
			int cnt1 = n-cnt0;
			if(cnt1>cnt0){
				ansi+='1';
			}
			else{
				ansi+='0';
			}
		}
		// avg/=n;
		cout<<binToDecimal(ansi)<<endl;
				
		
	}
}
