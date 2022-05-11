
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
char Line[80],fileName[25];
string search;
int offest;
string line;
ifstream fin;
int main(void){
    cout<<" enter the name of file";
    cin>>fileName;
    fin.open(fileName,ios::in);
    if(!fin){
        cout<<"file doesn`t exist  \n";
        exit(0);}

    cout<<"enter the word that you want me search about ?? "<<endl;
    cin>>search;
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin,line);
            if((offest=line.find(search,0)) != string::npos){
                cout<<" the word ( "<<search<<" ) is exist "<<endl;
            }
            else
                cout<<" the word ( "<<search<<" ) is not exist "<<endl;}


        fin.close();
        return 0 ;
    }}
