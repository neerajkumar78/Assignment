#include<bits/stdc++.h>
using namespace std;
int main(void){
    for(int i=0;i<13;i++){
		
		//print first half
        if(i<7){
			// print leading spaces at (i+1)th row
            for(int j=1;j<=i;j++){
                cout<<" ";
            }
			
			// print all numbers required at (i+1)th row
            for(int k=i+1;k<=7;k++){
                cout<<k<<" ";
            }
			
            cout<<endl;
        }
		
		// print second half
        else{
            int s=7-(i%7+1);
			
			// print leading spaces at (i+1)th row
            for(int j=1;j<s;j++){
                cout<<" ";
            }
			
			// print all numbers required at (i+1)th row
            for(int k=s;k<=7;k++){
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
