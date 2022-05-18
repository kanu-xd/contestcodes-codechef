#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==0&&y%2==0)
        {
            cout<<"yes"<<endl;
        }
        else if(x>0&&(x&1)==0)
        cout<<"yes"<<endl;
        else{
            cout<<"no"<<endl;
        }
        
    }
    
	// your code goes here
	return 0;
}
