#include <iostream>
#include<string>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;

int main ()
{
  string word , srch ;
  int counter = 0;
  char file [90];
  cout<<" Enter file name: ";
  cin>>file;
  fstream myfile(file,ios::out | ios::in);
  if(!myfile){
    cout<<"this file can't be opened,try again";
  }else{
      cout<<" Enter the word you search for: ";
  cin>>srch;
  while(!myfile.eof()){

    while(myfile>> word ){
        if( word ==srch){
            counter +=1;
        }
    }


                      }}
cout<< counter ;
  return 0;}
