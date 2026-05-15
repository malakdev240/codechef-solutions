#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int total= n*x;
        int pizza = (total + 3 )/4;
        cout<<pizza<<endl;
    }
}
