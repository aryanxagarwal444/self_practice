#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int main() {
        string s,ls,ss;
        int c=0;
        cin>>s;
        int l;
        string n[s.length()]="";
        ls=s[0];
        n[c]=ls;
        for(int i=1; i<s.length(); i++){
            l=ls.length();
            if(i==s.length()-1)
            n[c]=ls;
                for(int j=0; j<l; j++){
                    if(ls[j]!=s[i]){
                        // cout<<"h";
                        if(l-j==1){
                            n[c]+=s[i];
                            // cout<<n[c];
                            ls+=s[i];
                            
                            // cout<<ls<<" ";
                        }
                        // cout<<endl;
                        continue;
                    }
                    // c++;
                    else{
                        // cout<<n[c];
                        ls.clear();
                        // cout<<ls<<endl;
                        ls=s[i-1];
                        i--;
                        // cout<<ls;
                        if(s[i]==s[i+1]){
                            ls=s[i];
                            // cout<<ls;
                            i++;
                        }
                        // cout<<ls;
                        c++;
                        break;
                    }  
                    // cout<<endl;                  
                }
                // cout<<l;
                
        }
        int pos=0;
                for(int i=0; i<=c; i++){
                    if(n[pos].size()<n[i].size()){
                        pos=i;
                    }
                    // cout<<n[i]<<" ";
                }
                // cout<<n.size();
                cout<<n[pos];
        // cout<<ls;
    }//abcabba