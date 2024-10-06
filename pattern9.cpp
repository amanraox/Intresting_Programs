#include <iostream>
using namespace std;
int main() {
    int n;cin>>n;
    n=n*2-1;
    for (int i=0;i<n;i++) 
    {
        for (int j=0;j<n;j++)
            cout<<(n+1)/2-min(min(i,j),min(n-1-i,n-1-j))<<" ";
        cout<<endl;
    }
	
	return 0;
}
