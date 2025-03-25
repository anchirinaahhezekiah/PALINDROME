#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S){
string P =S;
reverse(P.begin(),P.end());

if(S==P){
    return "Yes";
}
else {
return "No";
}
}
int main()
{
    cout<<"WELCOME TO C++ PROGRAMMING"<<endl;
    cout<<endl;
    cout<<"Program to Determine whether String is Palindrome or not"<<endl;
    cout<<endl;
    string name;
    cout<<"PLEASE ENTER YOUR NAME"<<endl;
    cin>>name;
    string S;
    cout << "PLEASE ENTER YOUR WORD" << endl;
    cin>>S;
    cout<<name<<","<<isPalindrome(S)<<"The string of "<<S<<" is a Palindrome"<<endl;
    return 0;
}
