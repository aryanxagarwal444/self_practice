#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        for(int k=4; k>=i; k--){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=5; i>=1; i--){
        for(int j=4; j>=i; j--){
            cout<<" ";
        }
        for(int k=2*i-1; k>=1; k--){
            cout<<"*";
        }
        cout<<endl;
    }    
}