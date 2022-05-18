#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
       int c=0;
        
        while(x!=y)
        {
            if(x<y){
            x+=2;
            c++;
            }
            else if(x>y)
            {
                x-=1;
                c++;
            }

        }
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}
