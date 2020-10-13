#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

// check whether substring starting from index 'position'
// and ending at index ('position'+length of second string)
//is a permutation of second string
bool checkPermutation(string S1,int l1,string S2,int l2,int position){
   
    return is_permutation(S1.begin()+position,S1.begin()+position+l2,S2.begin());
}
void allPermutation(string S1,string S2){
    // l1 and l2 stores the length of input strings
    int l1=S1.length();
    int l2=S2.length();
    
    //case when length of first string is
    //less than length of Second string
    //in this case no substring is possible
    if(l1<l2)
    return ;
    
    else{
        
        for(int i=0;i<=l1-l2;i++){
            
            if(checkPermutation(S1, l1, S2, l2, i)){
                
                cout<<"substring "<<S1.substr(i,l2)<<" present at index "<<i<<endl;
                
            }
        }
    }
    
}
int main(void){
    string S1;
    string S2;
    getline(cin,S1);
    getline(cin,S2);
    allPermutation(S1,S2);
    return 0;
}
