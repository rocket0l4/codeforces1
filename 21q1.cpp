#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count =0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i =0; i<s.length();i++){
            if(s[i] == 'r' || s[i+1] == 'R' && s[i] == 'g' || s[i+1] == 'G' && s[i] == 'b' || s[i+1] == 'B'){
                i++;
                count +1;
            }else{
                count =0;
            }
        }
        if(count == 1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }






    return 0;
}