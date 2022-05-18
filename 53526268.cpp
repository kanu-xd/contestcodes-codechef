#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c=0;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            if(a%2==1)
            {
            c++;}
            
        }
        if(c%2==1)
        c-=1;
        
        cout<<c/2<<endl;
        
    }
	// your code goes here
	return 0;
}
