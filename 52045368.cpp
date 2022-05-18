#include <bits/stdc++.h>
using namespace std;

int isMin(int n, int d){
    int newno = n, rem , count =0, c = 0;
    while(newno!=0){
        rem = newno % 10;
        newno = newno /10;
        c++;
        if(rem == d){
            newno = newno*pow(10,c)+(rem+1)*pow(10,c-1);
            count = newno -n;
            c = 0;
        }
    }
    return count;
}

int main() 
{
	int t;
	cin>>t;
	while(t--){
	    int n, d;
	    cin>>n>>d;
	    cout<<isMin(n, d)<<endl;
	}
	return 0;
}