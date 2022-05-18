#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int ans = (2*x-y-1)/2;
        cout<<ans*2<<endl;
    }
	// your code goes here
	return 0;
}
