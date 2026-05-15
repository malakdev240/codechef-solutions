#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int a[n];
    int lucky=0 , unlucky=0;
    // start=0
    //condition/end=n
    //steps++
    for (int i=0;i<n;i++){
           cin>>a[i]
        if (a[i]%2==0){//even
            //lucky
            lucky++;
        }
        else{//odd
            //unlucky
            unlucky++;
        }
        if (lucky > unlucky){
            cout <<"ready for battle"<<endl;
        }
        else{
            cout <<"not ready"<<endl;
        }
     
    }
    
