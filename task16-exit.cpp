#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
char name[90];
cout<<"enter your file name: ";
cin>>name;
char ch;
fstream myfile(name,ios::out | ios::in);
char targt[90];
cout<<"enter the new file name: ";
ofstream targtfile(targt, ios::out |  ios::in | ios::app);
while(!myfile.eof()){
    myfile.get(ch);
    targtfile>>ch;

}

    return 0;
}
