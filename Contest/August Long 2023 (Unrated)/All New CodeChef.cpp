https://www.codechef.com/problems/NEWCC
#include <iostream>
using namespace std;

int main() {
	// your code goes here
int newi;int old;
cin>>newi>>old;
if(newi>old){
    cout<<"New"<<endl;
    
}
else if(newi<old){
    cout<<"old"<<endl;
}
else{
    cout<<"same"<<endl;
}
	return 0;
}
