#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int st, en;
    int space=(2*n-2);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int s=1; s<=space; s++){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<k;
        }
        cout<<endl;
        space-=2;
    }
}