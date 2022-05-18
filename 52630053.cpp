#include <iostream>
using namespace std;

int main() {
    int t,r[5];
    cin>>t;
    while(t--)
    {
        int ind=0,eng=0,draw=0;
        for(int i=0;i<5;i++)
        {
            cin>>r[i];
        }
        for(int i=0;i<5;i++)
        {
            if (r[i]==1)
            ind++;
            else if (r[i]==2)
            eng++;
            else 
            draw++;
        }
        if(ind>eng)
        {
            cout<<"INDIA"<<endl;
        }
        else if (eng>ind)
        cout<<"ENGLAND"<<endl;
        else if(ind==eng)
        cout<<"DRAW"<<endl;
        else
        cout<<"DRAW"<<endl;
        
        
    
        
    }
	// your code goes here
	return 0;
}
