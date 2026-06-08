#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l,c=0;
    string sub;
    string pail;
    string p[100]="";
    for(int i=0; i<s.length(); i++){
        for(int j=s.length()-i; j>=i; j--){
            pail="";
            sub = s.substr(i,j);
            cout<<sub<<"  ";
            l=sub.length();
            for(int k=l-1; k>=0; k--){
                pail+=sub[k];
            }
            // if(pail==sub){
            //     p[c]=sub;
            //     c++;
            //     break;
            // }
        }
    }
    // for(int i=0; i<=c; i++){
    //     // cout<<p[c]<<endl;
    // }
}