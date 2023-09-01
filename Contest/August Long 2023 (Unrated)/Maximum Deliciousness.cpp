https://www.codechef.com/problems/KDELI?tab=statement

// 1st approach 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, l;
        cin >> n >> k >> l;
        int a[n];
        for(int i=0; i<n; i++)
        cin >> a[i];
        
        sort(a,a+n, greater<int>());
        long long ans = 0;
        int i=k;
        while(l-1 < n){
            ans += a[l-1];
            l += i;
        }
        std::cout <<  ans << std::endl;
    }
	// your code goes here
	return 0;
}


// 2nd approach
  #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,l;
	    cin>>n>>k>>l;
	    long a[n];
	    priority_queue<long> pq;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        pq.push(a[i]);
	    }
	    
	    int count=0;long long sum=0;
	    while(!pq.empty())
	    {
	        long top=pq.top();
	        pq.pop();
            count+=1;
	        if(count==l)
	        {
	            sum+=top;
	            //cout<<sum<<" ";
	        }
	        if(count==k)
	        {
	            count=0;
	        }
	    }
	    
	    //cout<<endl;
	    cout<<sum<<endl;
	}
	return 0;
}
