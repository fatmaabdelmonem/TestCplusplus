#include <iostream>
#include<fstream>
using namespace std;

int main()
{
 char file[90];
 cout<<"Enter file name: ";
 cin>>file;
 fstream myfile(file,ios::out | ios::in);
 while(!myfile.eof()){
    char ch;
    myfile.get(ch);
    int x= int(ch);

    while(int (ch)<=90 && int(ch)>=65){


        int y=int(ch)+32;
        ch = char(y);

    }
 }
return 0;}
