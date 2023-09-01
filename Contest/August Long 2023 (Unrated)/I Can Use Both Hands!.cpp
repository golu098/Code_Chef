https://www.codechef.com/problems/AMBIDEXTROUS
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// taking test case
	int t;
	cin>>t;
	while(t--){
	    // taking input
	    int l,r,m;
	    cin>>l>>r>>m;
	    // typecasting the value 
	    int satisfaction=ceil((float)m/l)+m/r;
	    cout<<satisfaction<<endl;
	    
	}
	return 0;
}
