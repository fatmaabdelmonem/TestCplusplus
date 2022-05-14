#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
//char ch = toupper('a');
int main()
{
   char name[90];
   cout<<"Enter your file name: ";
   cin>>name;
   fstream file(name, ios::in | ios::out);
   if(!file){
    cout<<"This file can't be opened,try again.";
   }else{
   string word ="";
   char x;
   while(!file.eof()){
    file.get(x);
    while(x!=' '){
        word+=x;
 file.get(x);
    }
     word[0]= toupper(word[0]);
 word.clear();}}





    return 0;
}
