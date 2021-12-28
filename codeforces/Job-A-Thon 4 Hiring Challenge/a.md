## Back-end complete function 

```cpp

class Solution {
    public :
    long long specialSum(vector<int> m,int N) {
        stack<pair<long long ,long long>> st ;
    	vector<long long> pref(N), suff(N) ;
    	pref[0] = m[0] ;
    	st.push({m[0],1LL}) ;
    	for(int i = 1 ; i < N ; ++i) {
    		long long cnt =0 ;
    		pref[i] = pref[i-1] ;
    		while(st.size() > 0 && st.top().first > m[i]) {
    			long long val = st.top().first ;
    			long long c = st.top().second ;
    			cnt += c ;
    			pref[i] -= val * c ;
    			st.pop();
    		}
    		st.push({m[i],cnt+1}) ;
    		pref[i] += (cnt+1)*m[i] ;
    	}
     
    	suff[N-1] = m[N-1] ;
    	while(st.size())
    	    st.pop();
    	st.push({m[N-1],1}) ;
    	for(int i = N-2 ; i >= 0 ; --i) {
    	
    		long long cnt =0 ;
    		suff[i] = suff[i+1] ;
    		while(st.size() > 0 && st.top().first > m[i]) {
    			long long val = st.top().first ;
    			long long c = st.top().second ;
    			cnt += c ;
    			suff[i] -= val * c ;
    			st.pop() ;
    		}
    		st.push({m[i],cnt+1}) ;
    		suff[i] += (cnt+1)*m[i] ;
    	}
    	long long ans = -1 ;
    	for(int i = 0 ; i < N ; ++i) {
    	    long long tmp = pref[i] ;
    	    tmp += suff[i];
    	    tmp -= m[i] ;
    		ans = max(ans, tmp) ;
    	}
    	return ans;
    }
};

```
## Python

```java
class Pair {
    long x, y;
    
    Pair(long x, long y) {
        this.x = x;
        this.y = y;
    }
}
     

class Solution{
    
    long specialSum(int m[], int N) { 
        long []pref = new long[N];
        Stack<Pair> st = new Stack<Pair>(); 
        st.push(new Pair(m[0],1));
        pref[0] = m[0] ;
        for(int i = 1 ; i < N ; ++i) {
            long cnt = 0 ; 
            pref[i] = pref[i-1] ; 
            while(!st.empty() && st.peek().x > m[i]) {
                long val = st.peek().x ; 
                long c = st.peek().y; 
                cnt += c ; 
                pref[i] -= val * c; 
                st.pop() ; 
            }  
            
            st.push(new Pair(m[i], cnt + 1)) ;
            pref[i] += (cnt + 1) * m[i] ;
        }
        
        while(!st.empty())
            st.pop() ;
        
        long []suff = new long[N];
        suff[N-1] = m[N-1] ;
        st.push(new Pair(m[N-1],1));
        for(int i = N- 2 ; i >= 0 ;--i) {
            long cnt = 0 ; 
            suff[i] = suff[i+1] ; 
            while(!st.empty() && st.peek().x > m[i]) {
                long val = st.peek().x ; 
                long c = st.peek().y; 
                cnt += c ; 
                suff[i] -= val * c; 
                st.pop() ; 
            }  
            
            st.push(new Pair(m[i], cnt + 1)) ;
            suff[i] += (cnt + 1) * m[i] ;
        }
        
        long ans = -1;
        for(int i = 0 ; i < N ; ++i) {
            ans = Math.max(ans, pref[i] + suff[i] - m [i] ) ;
        }
        return ans;
   
    } 
}


```
##python
```py
class Solution:
    def specialSum(self, m, N): 
        st = [[m[0], 1]]
        pref = [0]*N
        pref[0] = m[0]
        for i in range(1, N):
            cnt = 0 
            pref[i] += pref[i-1]
            while len(st) > 0 and st[-1][0] > m[i]:
                val = st[-1][0]
                c = st[-1][1]
                cnt += c 
                pref[i] -= val * c
                st.pop()
            st.append([m[i], cnt + 1])
            pref[i] += (cnt + 1) * m[i]
        
        suff = [0]*N
        suff[N-1] = m[N-1]
        while len(st) > 0 :
            st.pop()
        st.append([m[N-1], 1])
        for i in range(N-2,-1,-1):
            cnt = 0 
            suff[i] += suff[i+1]
            while len(st) > 0 and st[-1][0] > m[i]:
                val = st[-1][0]
                c = st[-1][1]
                cnt += c 
                suff[i] -= val * c
                st.pop()
            st.append([m[i], cnt + 1])
            suff[i] += (cnt + 1) * m[i]
        ans = -1
        for i in range(N):
            ans = max(ans, pref[i] + suff[i] - m[i])
        return ans

```


