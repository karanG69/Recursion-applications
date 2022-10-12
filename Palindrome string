#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
bool pelindrome_string(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    string new_s="";
    while(!st.empty()){
        new_s+=st.top();
        st.pop();
    }
    if(new_s==s){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    string s;
    cin>>s;
    if(pelindrome_string(s)==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}
