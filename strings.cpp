#include<iostream>
using namespace std;

int main(){
    string str;
    str = "hello";
    cout<<str<<endl;
    string s;
    // cin>>s;//will obly accept till white spaces
    // cout<<s;
    // getline(cin,s);// will accpet everything
    // cout<<s<<endl;
    // getline(cin, s, '%');// will accept till %
    // cout<<s<<endl;
     //STRING FUNCTIONS
    //  s.length();
    //  s.empty();//returns true or false
    // //  s.clear();
    //  cout<<*s.begin();
    //  s.end(); 
    //  s.append(str);
    //  s.append("sfs");
    // char ch = str.at(0);
    // cout<<ch;
    // cout<<str.substr(2,2);// starts printing from index 2 and prints the specified number of characters as shown 
    // str.insert(2,"&");//inserts given symbol at the specified index 
    // cout<<str;
    // str.find("l");
    str.erase(1,3);//erases 3 elements after index 1
    cout<<str;
}